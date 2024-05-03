#include "signup.h"
#include "ui_signup.h"
#include <QPixmap>
signup::signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);

    QPixmap image(":/images/images/tic.png"); // Replace ":/images/image.png" with the actual path to your image file
    ui->Photo->setPixmap(image);
    ui->Photo->setFixedSize(image.size());



}

signup::~signup()
{
    delete ui;
}
