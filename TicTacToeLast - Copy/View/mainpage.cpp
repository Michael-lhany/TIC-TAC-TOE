#include "mainpage.h"
#include "ui_mainpage.h"
#include <QMessageBox>
#include <QApplication>
#include <QPalette>
#include <QPixmap>
#include <QPainter>
#include <QLabel>
MainPage::MainPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainPage)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/images/images/icon1.png"));
    clickSound.setSource(QUrl::fromLocalFile(":/images/images/click_sound.wav"));
    clickSound.setVolume(0.1f);  // Set volume to 25%

}

MainPage::~MainPage()
{
    delete ui;
}
void MainPage::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);
    setMainPageBackground(); // Ensure the background image resizes with the window
}
void MainPage::setMainPageBackground()
{
    QPixmap background(":/images/images/new.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio);

    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setPalette(palette);
}
void MainPage::on_pushButton_LogIn_clicked()
{
    QString username,password;
    username=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();
    if(username=="test" && password=="test")
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

