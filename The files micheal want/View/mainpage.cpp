#include "mainpage.h"
#include "ui_mainpage.h"
#include <QMessageBox>
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
        TitleScreen *titlescreen= new TitleScreen();
        titlescreen->show();
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

