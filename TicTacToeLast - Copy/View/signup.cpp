#include "signup.h"
#include "ui_signup.h"
#include <QMessageBox>
#include <QPixmap>
#include <QSqlDatabase>
#include <QLabel>
#include "mainpage.h"
#include <QCryptographicHash> // Include for password hashing
#include "TTTCommonTypes.h"
signup::signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);


setWindowIcon(QIcon(":/images/images/icon1.png"));
    setWindowTitle("Tic Tac Toe");  // Set the custom title text
    clickSound.setSource(QUrl::fromLocalFile(":/images/images/click_sound.wav"));
    clickSound.setVolume(0.1f);  // Set volume to 25%
    // Create database connection
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("game_database.db");

    if (!m_db.open()) {
        QMessageBox::critical(this, "Error", "Failed to connect to database: " + m_db.lastError().text());
    } else {
        qDebug() << "Database connection successful.";

        // Create 'users' table if not exists
        QSqlQuery query(m_db);
        query.exec("CREATE TABLE IF NOT EXISTS users (username TEXT PRIMARY KEY, password TEXT)");
    }
}

signup::~signup()
{
    delete ui;
}

void signup::on_pushButton_Register_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QString confirmPassword = ui->lineEdit_password_2->text();
    qDebug() << "I am here";

    if (password != confirmPassword) {
        QMessageBox::warning(this, "Registration", "Passwords do not match.");
        return;
    }

    // Hash the password using SHA-256
    QByteArray passwordHash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();

    if (registerUser(username, passwordHash)) {
        QMessageBox::information(this, "Registration", "Registration successful!");
        // Show login form after successful registration
        this->hide();
        MainPage *Mainwindow= new MainPage();
        Mainwindow->show();
    } else {
        QMessageBox::critical(this, "Registration", "Failed to register user.");
    }
}

bool signup::registerUser(const QString& username, const QByteArray& passwordHash)
{
    if (!m_db.isOpen()) {
        qDebug() << "Database connection is not open.";
        return false;
    }

    if (username.isEmpty() || passwordHash.isEmpty()) {
        qDebug() << "Username or password hash is empty.";
        return false;
    }

    QSqlQuery query(m_db);

    if (!m_db.transaction()) {
        qDebug() << "Failed to start database transaction.";
        return false;
    }

    query.prepare("INSERT INTO users (username, password) VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", passwordHash);

    if (!query.exec()) {
        qDebug() << "Error executing insert query:" << query.lastError().text();
        m_db.rollback();
        return false;
    }

    if (!m_db.commit()) {
        qDebug() << "Failed to commit database transaction.";
        m_db.rollback();
        return false;
    }

    qDebug() << "User registered successfully!";
    return true;
}



