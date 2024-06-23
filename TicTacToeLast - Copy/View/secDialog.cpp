#include "secDialog.h"
#include "ui_secDialog.h"
#include <QMessageBox>
StartUp::StartUp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StartUp)
{
    ui->setupUi(this);
}

StartUp::~StartUp()
{
    delete ui;
}

void StartUp::on_pushButton_LogIn_clicked()
{
    QString username,password;
    username=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();
    if(username=="test" && password=="123456")
    {
        hide();
        QMessageBox::information(this,"Login","Username and password is correct");
        SecDialog= new QDialog(this);
        SecDialog->show();

    }
    else{
        QMessageBox::warning(this,"Login","Username and password is not correct");
    }
}

