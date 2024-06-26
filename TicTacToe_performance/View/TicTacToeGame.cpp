#include "TicTacToeGame.h"
#include "ui_TicTacToeGame.h"
#include <QMessageBox>
#include <QPushButton>
#include "Global_variables.h"
#include "TTTCommonTypes.h"
#include "playerhistory.h"
#include "Board.h"
#include "mainpage.h"
#include "signup.h"
#include "TitleScreen.h"
#include <QMediaPlayer>
extern bool Ai_checked;
extern QString last_position;
extern QString username;

TicTacToeGame::TicTacToeGame(QWidget *parent)
    : QDialog(parent), ui(new Ui::TicTacToeGame)
{
    // remove question mark from the title bar
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->setupUi(this);
    setConnections();
    setWindowIcon(QIcon(":/images/images/icon1.png"));
    clickSound.setSource(QUrl::fromLocalFile(":/images/images/click_sound.wav"));
    clickSound.setVolume(0.1f);  // Set volume to 25%
    clickSound2.setSource(QUrl::fromLocalFile(":/images/images/goodresult.wav"));
    clickSound2.setVolume(0.1f);  // Set volume to 25%
    clickSound3.setSource(QUrl::fromLocalFile(":/images/images/fail.wav"));
    clickSound3.setVolume(0.1f);  // Set volume to 25%
    clickSound4.setSource(QUrl::fromLocalFile(":/images/images/draw.wav"));
    clickSound4.setVolume(0.1f);  // Set volume to 25%
    QString buttonStyle = R"(
        QPushButton {
            background-color: #e3e3e3;
            color: #1323ff;
            border-style: solid;
            border-radius: 15px;
            border-color: #000000;
            font-weight: bold;
            padding: 13px;
        }

        QPushButton::hover {
            background-color: #3dffaf;
            color: #000000;
            border-style: solid;
            border-color: #000000;
            font-weight: bold;
            padding: 13px;
        }

        QPushButton::pressed {
            background-color: #3dc8af;
            color: #000000;
            border-style: solid;
            border-color: #000000;
            font-weight: bold;
            padding: 13px;
        }
    )";

    ui->reset->setStyleSheet(buttonStyle);
    ui->back->setStyleSheet(buttonStyle);
    ui->groupBox->setMinimumSize(200, 100);
    QVBoxLayout *verticalLayoutWithSpacer = new QVBoxLayout();
    QSpacerItem *spacer = new QSpacerItem(0, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);
    verticalLayoutWithSpacer->addItem(spacer);

    // Add existing buttons to the new vertical layout
    verticalLayoutWithSpacer->addWidget(ui->reset);
    //verticalLayoutWithSpacer->addWidget(ui->adell);
    verticalLayoutWithSpacer->addWidget(ui->back);

    // Remove existing buttons from the horizontal layout
    ui->horizontalLayout_2->removeWidget(ui->reset);
    //ui->horizontalLayout_2->removeWidget(ui->adell);
    ui->horizontalLayout_2->removeWidget(ui->back);

    // Add the new vertical layout with spacer to the horizontal layout
    ui->horizontalLayout_2->addLayout(verticalLayoutWithSpacer);
}

void TicTacToeGame::setConnections()
{
    // New Game Connection - resetting the game
    connect(ui->reset, &QPushButton::clicked, [=] { emit handleResetButton(); });
    connect(ui->back, &QPushButton::clicked, [=] { handleBackButton(); });
}

void TicTacToeGame::handleResetButton()
{
    clickSound.play();
    emit newGame();  // Emit the newGame signal to reset the game
}

void TicTacToeGame::handleBackButton()
{
    clickSound.play();
    close();  // Close the game dialog
}

vector<Cell> TicTacToeGame::buildCellButtons(size_t boardSize)
{
    vector<Cell> cells;
    cells.reserve(boardSize * boardSize);
    for (size_t row = 0; row < boardSize; ++row) {
        for (size_t col = 0; col < boardSize; ++col) {
            // Add buttons to gridLayout
            QPushButton *btn = new QPushButton();
            btn->setProperty("cell", true);
            ui->gridBoard->addWidget(btn,
                                     static_cast<int>(row),
                                     static_cast<int>(col),
                                     defaults::GUI_CELL_ROW_SPAN,
                                     defaults::GUI_CELL_COLUMN_SPAN);
            // Reference to cells
            cells.emplace_back(btn, row, col);
        }
    }
    // Adjusts window size to fit children widgets added dynamically
    adjustSize();

    // Return by value to allow for RVO (Copy Ellision)
    return cells;
}

QString TicTacToeGame::getPlayerText(BoardMarks currentPlayer)
{
    switch (currentPlayer) {
    case BoardMarks::O:
        return "O";
    case BoardMarks::X:
        return "X";
    default:
        return "";
    }
}

QString TicTacToeGame::getPlayerStyleSheet(BoardMarks currentPlayer)
{
    QString color;

    switch (currentPlayer) {
    case BoardMarks::O:
        color = defaults::O_COLOR;
        break;
    case BoardMarks::X:
        color = defaults::X_COLOR;
        break;
    default:
        color = defaults::DEFAULT_COLOR;
        break;
    }

    return QString("font: 50px \"Verdana\";"
                   "min-height: 100px;"
                   "max-height: 100px;"
                   "min-width: 100px;"
                   "max-width: 100px;"
                   "color: %1")
        .arg(color);
}

void TicTacToeGame::updateCell(Cell &cell, BoardMarks currentPlayer)
{
    QString markText;
    if (!Ai_checked) {
        switch (currentPlayer) {
        case BoardMarks::Empty:
            markText = "Empty";
            break;
        case BoardMarks::X:
            markText = "Player X";
            break;
        case BoardMarks::O:
            markText = "Player O";
            break;
        }
    } else {
        markText = "Ai mode";
    }

    // Update Cell button in GUI
    cell.cellBtn->setStyleSheet(getPlayerStyleSheet(currentPlayer));
    cell.cellBtn->setText(getPlayerText(currentPlayer));
}

QString TicTacToeGame::getBoardFinalStateText(BoardState boardState)
{
    Playerhistory store_game;
    QString lastposition;
    QString result;
    switch (boardState) {
    case BoardState::XWins:
        lastposition = last_position;
        qDebug() << Ai_checked;
        counterX++;
        updatePlayerNames();  // Update Player 1 counter label with username
        if (Ai_checked) {
            result = "loss";
        } else {
            result = "win";
        }
        qDebug() << username;
        store_game.recordGame(username, result, lastposition);
        return QString("%1 wins!").arg(username);  // Show username in the winning message
    case BoardState::OWins:
        counterO++;
        updatePlayerNames();  // Update Player 2 counter label
        lastposition = last_position;
        qDebug() << Ai_checked;
        if (Ai_checked) {
            result = "win";
        } else {
            result = "loss";
        }
        qDebug() << username;
        store_game.recordGame(username, result, lastposition);
        return "Player O wins!";
    case BoardState::Tie:
        updatePlayerNames();  // Update Player 2 counter label
        lastposition = last_position;
        qDebug() << Ai_checked;
        result = "tie";
        qDebug() << username;
        store_game.recordGame(username, result, lastposition);
        return "It's a tie!";
    default:
        return "";
    }
}

void TicTacToeGame::updatePlayerNames()
{
    if (Ai_checked) {
        ui->player2->setText(QString("AI Player : %1").arg(counterO));
    } else {
        ui->player2->setText(QString("Player 2 : %1").arg(counterO));
    }
    ui->adell->setText(QString("%1 : %2").arg(username).arg(counterX));  // Update Player 1 counter label with username
    return;
}

void TicTacToeGame::declareGameState(BoardState boardState)
{
    QMessageBox resultBox;
    if (boardState == BoardState::XWins) {
        clickSound2.play();  // Play sound effect only when Player X wins
    }
    if (boardState == BoardState::OWins) {
        clickSound3.play();  // Play sound effect only when Player X wins
    }
    if (boardState == BoardState::Tie) {
        clickSound4.play();  // Play sound effect only when Player X wins
    }
    resultBox.setWindowTitle("                        Game Result");
    resultBox.setWindowIcon(QIcon(":/images/images/icon1.png"));
    resultBox.setText("Game over, " + getBoardFinalStateText(boardState));
    resultBox.setStyleSheet(R"(
        QMessageBox {
            background-color: #f0f0f0;
            font-family: 'PROSPEKT';
            font-size: 18px;
            border: 2px solid #000000;
            border-radius: 10px;
        }
        QMessageBox QLabel {
color: #1323ff;
border-style: solid;
 border-radius: 15px;
border-color: #000000;
        }
        QMessageBox QPushButton {
    background-color:#e3e3e3;
    color: #1323ff;
    border-style: solid;
    border-radius:15px;
    border-color: #000000;
    font-weight : bold;
    padding: 13px;

        }
        QMessageBox QPushButton:hover {
    background-color: #3dffaf;
    color: #000000;
    border-style: solid;
    border-color: #000000;
    font-weight : bold;
    padding: 13px;
        }
        QMessageBox QPushButton::pressed
{
    background-color: #3dc8af;
    color: #000000;
    border-style: solid;
    border-color: #000000;
    font-weight : bold;
    padding: 13px;

}
    )");
    resultBox.exec();
}

void TicTacToeGame::reset(vector<Cell> &cells)
{
    clickSound.play();
    for (auto &cell : cells)
        cell.cellBtn->setText("");
}
