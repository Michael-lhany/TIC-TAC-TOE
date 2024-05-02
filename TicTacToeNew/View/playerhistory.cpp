#include "playerhistory.h"
#include "ui_playerhistory.h"
#include "profile.h"
Playerhistory::Playerhistory(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Playerhistory)
{
    ui->setupUi(this);
}

Playerhistory::~Playerhistory()
{
    delete ui;
}

void Playerhistory::on_return_2_clicked()
{
    this->hide();
    Profile *profile= new Profile();
    profile->show();
}

