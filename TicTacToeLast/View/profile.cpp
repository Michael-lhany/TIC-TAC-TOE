#include "profile.h"
#include "ui_profile.h"

Profile::Profile(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Profile)
{
    ui->setupUi(this);
}

Profile::~Profile()
{
    delete ui;
}

void Profile::on_start_clicked()
{
    this->hide();
    TitleScreen *titlescreen= new TitleScreen();
    titlescreen->show();
}


void Profile::on_profile_clicked()
{
    this->hide();
    Playerhistory *playerhistory= new Playerhistory();
    playerhistory->show();
}

