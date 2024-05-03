#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QCryptographicHash> // Include for password hashing

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect login button signal
    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::on_loginButton_clicked);

    // Connect register link signal
    connect(ui->registerLink, &QPushButton::clicked, this, &MainWindow::on_registerLink_clicked);

    // Create database connection
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("TIC-TAC-TOE_database.db");

    if (!m_db.open()) {
        QMessageBox::critical(this, "Error", "Failed to connect to database: " + m_db.lastError().text());
    } else {
        qDebug() << "Database connection successful.";

        // Create 'users' table if not exists
        QSqlQuery query(m_db);
        query.exec("CREATE TABLE IF NOT EXISTS users (username TEXT PRIMARY KEY, password TEXT)");
    }

    // Show login form initially
    showLogin();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (verifyLogin(username, password)) {
        QMessageBox::information(this, "Login", "Login successful!");
        // Proceed to main window or perform other actions
    } else {
        QMessageBox::warning(this, "Login", "Invalid username or password.");
    }
}

void MainWindow::on_registerLink_clicked()
{
    // Show registration form
    showRegistration();
}

void MainWindow::on_registerButton_clicked()
{
    QString username = ui->usernameLineEdit_register->text();
    QString password = ui->passwordLineEdit_2->text();
    QString confirmPassword = ui->passwordLineEdit_3->text();

    if (password != confirmPassword) {
        QMessageBox::warning(this, "Registration", "Passwords do not match.");
        return;
    }

    // Hash the password using SHA-256
    QByteArray passwordHash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();

    if (registerUser(username, passwordHash)) {
        QMessageBox::information(this, "Registration", "Registration successful!");
        // Show login form after successful registration
        showLogin();
    } else {
        QMessageBox::critical(this, "Registration", "Failed to register user.");
    }
}

bool MainWindow::verifyLogin(const QString& username, const QString& password)
{
    if (!m_db.isOpen()) {
        qDebug() << "Database connection is not open.";
        return false;
    }

    QSqlQuery query(m_db);
    query.prepare("SELECT password FROM users WHERE username = :username");
    query.bindValue(":username", username);

    if (!query.exec() || !query.next()) {
        qDebug() << "Error executing login query:" << query.lastError().text();
        return false;
    }

    // Retrieve the hashed password from the database
    QByteArray storedPasswordHash = query.value(0).toByteArray();

    // Hash the entered password using SHA-256
    QByteArray enteredPasswordHash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();

    // Compare the hashed passwords
    if (enteredPasswordHash == storedPasswordHash) {
        qDebug() << "Login successful!";
        return true;
    } else {
        qDebug() << "Invalid username or password.";
        return false;
    }
}


bool MainWindow::registerUser(const QString& username, const QByteArray& passwordHash)
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

void MainWindow::showLogin()
{
    ui->stackedWidget->setCurrentIndex(0); // Index 0 is the login form
}

void MainWindow::showRegistration()
{
    ui->stackedWidget->setCurrentIndex(1); // Index 1 is the registration form
}
