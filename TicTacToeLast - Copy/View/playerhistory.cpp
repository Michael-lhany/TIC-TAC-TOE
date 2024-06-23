#include "playerhistory.h"
#include "ui_playerhistory.h"
#include "profile.h"
Playerhistory::Playerhistory(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Playerhistory)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/images/images/icon1.png"));
    setWindowTitle("Tic Tac Toe");  // Set the custom title text
    clickSound.setSource(QUrl::fromLocalFile(":/images/images/click_sound.wav"));
    clickSound.setVolume(0.1f);  // Set volume to 25%
}

Playerhistory::~Playerhistory()
{
    delete ui;
}

void Playerhistory::on_return_2_clicked()
{ clickSound.play();
    this->hide();
    Profile *profile= new Profile();
    profile->show();
}

