#include "profile.h"
#include "ui_profile.h"
#include <QSoundEffect>  // Include QSound

Profile::Profile(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Profile)


{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/images/images/icon1.png"));
    setWindowTitle("Tic Tac Toe");  // Set the custom title text
    clickSound.setSource(QUrl::fromLocalFile(":/images/images/click_sound.wav"));
    clickSound.setVolume(0.1f);  // Set volume to 25%
}

Profile::~Profile()
{
    delete ui;
}

void Profile::on_start_clicked()
{    clickSound.play();  // Play the sound effect

    this->hide();
    TitleScreen *titlescreen= new TitleScreen();
    titlescreen->show();
}


void Profile::on_profile_clicked()
{    qDebug() << "Start button clicked"; // Debug message
    clickSound.play();  // Play the sound effect
    qDebug() << "Sound played"; // Debug message
    this->hide();
    Playerhistory *playerhistory= new Playerhistory();
    playerhistory->show();
}


void Profile::on_how_clicked()
{     clickSound.play();  // Play the sound effect
 // Play the sound effect
    howtoplay *howtoplayy= new howtoplay();
    howtoplayy->show();
}


void Profile::on_groupBox_clicked()
{
    clickSound.play();  // Play the sound effect
// Play the sound effect
}

