#include "mainpage.h"
#include "ui_mainpage.h"
#include <QMessageBox>
#include <QApplication>
MainPage::MainPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainPage)
{
    ui->setupUi(this);
}

MainPage::~MainPage()
{
    delete ui;
}

void MainPage::on_pushButton_LogIn_clicked()
{
    QString username,password;
    username=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();
    if(username=="test" && password=="123456")
    {
        QMessageBox::information(this,"Login","Username and password is correct");
        this->hide();
        Profile *profile= new Profile();
        profile->show();
    }
    else{
        QMessageBox::warning(this,"Login","Username and password is not correct");
    }

}


void MainPage::on_pushButton_exit_clicked()
{
    QMessageBox::StandardButton replay;
    replay= QMessageBox:: question(this,"EXIT","Are you sure to close the app",QMessageBox::Yes | QMessageBox::No);
    if(replay == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}


void MainPage::on_pushButton_LogIn_pressed()
{

}

<<<<<<< HEAD

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
{
    this->hide();
    signup *signupp= new signup();
    signupp->show();
}

=======
>>>>>>> d0fe8aef13dac56cc0444ec1b3f89ffb21a5452d
