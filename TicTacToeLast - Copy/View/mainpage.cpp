#include "mainpage.h"
#include "ui_mainpage.h"
#include <QMessageBox>
#include <QApplication>
#include <QPalette>
#include <QPixmap>
#include <QPainter>
#include <QLabel>
#include <QCryptographicHash> // Include for password hashing
#include <QSqlDatabase>
QString username,password;

MainPage::MainPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainPage)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/images/images/icon1.png"));
    clickSound.setSource(QUrl::fromLocalFile(":/images/images/click_sound.wav"));
    clickSound.setVolume(0.1f);  // Set volume to 25%
    // Create database connection
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("game_database.db");
    if (!m_db.open()) {
        QMessageBox::information(this, "Error", "Failed to connect to database: " + m_db.lastError().text());
    } else {
        qDebug() << "Database connection successful.";

        // Create 'users' table if not exists
        QSqlQuery query(m_db);
        query.exec("CREATE TABLE IF NOT EXISTS users (username TEXT PRIMARY KEY, password TEXT)");
    }

}

MainPage::~MainPage()
{
    delete ui;
}
bool MainPage::verifyLogin(const QString& username, const QString& password)
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

void MainPage::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);
    setMainPageBackground(); // Ensure the background image resizes with the window
}
void MainPage::setMainPageBackground()
{
    QPixmap background(":/images/images/back2.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio);

    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setPalette(palette);
}
void MainPage::on_pushButton_LogIn_clicked()
{
    username=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();
    if(verifyLogin(username, password))
    {
        //QMessageBox::information(this,"Login","Username and password is correct");
         clickSound.play();
        this->hide();
        Profile *profile= new Profile();
        profile->show();
    }
    else{
        QMessageBox msgBox;
        msgBox.setText("Username or password are incorrect");
        msgBox.setWindowIcon(QIcon(":/images/images/icon1.png"));
        msgBox.setStyleSheet(R"(
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

        // Add buttons and display the message box
        msgBox.addButton(QMessageBox::Ok);
        msgBox.exec();
    }

}


void MainPage::on_pushButton_exit_clicked()
{  clickSound.play();
    QMessageBox::StandardButton replay;
    replay= QMessageBox:: question(this,"EXIT","Are you sure to close the app?!",QMessageBox::Yes | QMessageBox::No);
    if(replay == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}


void MainPage::on_pushButton_LogIn_pressed()
{

}


void MainPage::on_label_linkActivated(const QString &link)
{

}


void MainPage::on_checkBox_showpassword_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->lineEdit_password->setEchoMode(QLineEdit::Normal); // Show password
    } else {
        ui->lineEdit_password->setEchoMode(QLineEdit::Password); // Hide password
    }
}


void MainPage::on_pushButton_signup_clicked()
{    clickSound.play();
    this->hide();
    signup *signupp= new signup();
    signupp->show();
}





void MainPage::on_label_5_linkActivated(const QString &link)
{

}

