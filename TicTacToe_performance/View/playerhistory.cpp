#include "playerhistory.h"
#include "ui_playerhistory.h"
#include "profile.h"
#include <QPixmap>
#include <QMessageBox>
#include <QLabel>
#include <QCryptographicHash>
#include "Board.h"
#include "lastpositiondisplay.h"
#include <QPalette>
#include <QPixmap>
#include <QPainter>
Playerhistory::Playerhistory(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Playerhistory)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/images/images/icon1.png"));
    setWindowTitle("Tic Tac Toe");  // Set the custom title text
    clickSound.setSource(QUrl::fromLocalFile(":/images/images/click_sound.wav"));
    clickSound.setVolume(0.1f);  // Set volume to 25%
    connect(ui->gameComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &Playerhistory::onGameSelected);

    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("game_database.db");

    if (!m_db.open()) {
        QMessageBox::critical(this, "Error", "Failed to connect to database: " + m_db.lastError().text());
    } else {
        qDebug() << "Database connection successful.";

        // Create necessary tables if they do not exist
        QSqlQuery query(m_db);
        query.exec("CREATE TABLE IF NOT EXISTS users (username TEXT PRIMARY KEY, password TEXT)");
        query.exec("CREATE TABLE IF NOT EXISTS games ("
                   "game_id INTEGER PRIMARY KEY AUTOINCREMENT,"
                   "username TEXT,"
                   "result TEXT,"
                   "last_board_position TEXT,"
                   "timestamp DATETIME DEFAULT CURRENT_TIMESTAMP,"
                   "FOREIGN KEY (username) REFERENCES users(username))");
        query.exec("CREATE TABLE IF NOT EXISTS game_results ("
                   "username TEXT PRIMARY KEY,"
                   "wins INTEGER DEFAULT 0,"
                   "losses INTEGER DEFAULT 0,"
                   "draws INTEGER DEFAULT 0,"
                   "FOREIGN KEY (username) REFERENCES users(username))");
    }
}

Playerhistory::~Playerhistory()
{
    delete ui;
}
void Playerhistory::resizeEvent(QResizeEvent *event)
{
    QDialog::resizeEvent(event);
    setMainPageBackground(); // Ensure the background image resizes with the window
}
void Playerhistory::setMainPageBackground()
{
    QPixmap background(":/images/images/new3.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio);

    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setPalette(palette);
}
void Playerhistory::on_return_2_clicked()
{ clickSound.play();
    this->hide();
    Profile *profile= new Profile();
    profile->show();
}
bool Playerhistory::recordGame(QString &username, QString &result, QString &lastBoardPosition) {
    QSqlQuery query(m_db);

    // Insert the game into the games table
    query.prepare("INSERT INTO games (username, result, last_board_position) VALUES (:username, :result, :lastBoardPosition)");
    query.bindValue(":username", username);
    query.bindValue(":result", result);
    query.bindValue(":lastBoardPosition", lastBoardPosition);

    if (!query.exec()) {
        qDebug() << "Error inserting game data:" << query.lastError().text();
        return false;
    }

    // Ensure a record exists in the game_results table
    query.prepare("INSERT OR IGNORE INTO game_results (username) VALUES (:username)");
    query.bindValue(":username", username);

    if (!query.exec()) {
        qDebug() << "Error inserting initial game result:" << query.lastError().text();
        return false;
    }

    // Update the game_results table
    QString updateQuery;
    if (result == "win") {
        updateQuery = "UPDATE game_results SET wins = wins + 1 WHERE username = :username";
    } else if (result == "loss") {
        updateQuery = "UPDATE game_results SET losses = losses + 1 WHERE username = :username";
    } else if (result == "tie") {
        updateQuery = "UPDATE game_results SET draws = draws + 1 WHERE username = :username";
    }

    query.prepare(updateQuery);
    query.bindValue(":username", username);

    if (!query.exec()) {
        qDebug() << "Error updating game results:" << query.lastError().text();
        return false;
    }

    return true;
}

QMap<QString, int> Playerhistory::getUserStatistics(QString &username) {
    QMap<QString, int> stats;
    QSqlQuery query(m_db);

    query.prepare("SELECT wins, losses, draws FROM game_results WHERE username = :username");
    query.bindValue(":username", username);

    if (!query.exec()) {
        qDebug() << "Error retrieving user statistics:" << query.lastError().text();
        return stats;
    }

    if (query.next()) {
        stats["wins"] = query.value("wins").toInt();
        stats["losses"] = query.value("losses").toInt();
        stats["draws"] = query.value("draws").toInt();
    }

    return stats;
}

QList<QPair<int, QString>> Playerhistory::getUserGames(QString &username) {
    QList<QPair<int, QString>> games;
    QSqlQuery query(m_db);

    query.prepare("SELECT game_id, result FROM games WHERE username = :username");
    query.bindValue(":username", username);

    if (!query.exec()) {
        qDebug() << "Error retrieving user games:" << query.lastError().text();
        return games;
    }

    while (query.next()) {
        int gameId = query.value("game_id").toInt();
        QString result = query.value("result").toString();
        games.append(qMakePair(gameId, result));
    }

    qDebug() << "Retrieved games:" << games; // Add this line to debug the retrieved games

    return games;
}

QString Playerhistory::getLastBoardPosition(int gameId) {
    QString lastBoardPosition_data;
    QSqlQuery query(m_db);

    query.prepare("SELECT last_board_position FROM games WHERE game_id = :gameId");
    query.bindValue(":gameId", gameId);

    if (!query.exec()) {
        qDebug() << "Error retrieving last board position:" << query.lastError().text();
        return lastBoardPosition_data;
    }

    if (query.next()) {
        lastBoardPosition_data = query.value("last_board_position").toString();
    }

    return lastBoardPosition_data;
}
void Playerhistory::loadUserStatistics( QString &username) {
    auto stats = getUserStatistics(username);
    ui->winsLabel->setText(QString::number(stats["wins"]));
    ui->lossesLabel->setText(QString::number(stats["losses"]));
    ui->drawsLabel->setText(QString::number(stats["draws"]));
    ui->name->setText(username);
    int gameplayed=stats["wins"]+stats["losses"]+stats["draws"];
    ui->gameplayedd->setText(QString::number(gameplayed));
}
void Playerhistory::loadUserGames(QString &username) {
    ui->gameComboBox->clear();

    // Add an empty placeholder item
    ui->gameComboBox->addItem("Select a game...", QVariant());

    auto games = getUserGames(username);
    qDebug() << "Games to add to combo box:" << games; // Debugging line
    for (const auto &game : games) {
        ui->gameComboBox->addItem(QString("Game %1 (%2)").arg(game.first).arg(game.second), game.first);
    }
}


void Playerhistory::onGameSelected(int index) {
    if (index == 0) return; // No selection
    int gameId = ui->gameComboBox->currentData().toInt();
    QString lastBoardPosition = getLastBoardPosition(gameId);

    // Hide Playerhistory dialog
    this->hide();

    // Show LastPositionDisplay dialog
    lastpositiondisplay *LastPositionDisplay = new lastpositiondisplay();
    connect(LastPositionDisplay, &lastpositiondisplay::finished, this, &Playerhistory::show); // Ensure Playerhistory shows when lastpositiondisplay is closed
    LastPositionDisplay->setAttribute(Qt::WA_DeleteOnClose); // Ensure the dialog is deleted when closed
    LastPositionDisplay->updateBoard(lastBoardPosition);
    LastPositionDisplay->show();
}
