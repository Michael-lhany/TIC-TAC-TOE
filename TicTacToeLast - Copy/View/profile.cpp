#include "profile.h"
#include "ui_profile.h"
#include <QSoundEffect>  // Include QSound
#include <QPalette>
#include <QPixmap>
#include <QPainter>
#include <QLabel>
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
void Profile::resizeEvent(QResizeEvent *event)
{
    QDialog::resizeEvent(event);
    setMainPageBackground(); // Ensure the background image resizes with the window
}

void Profile::setMainPageBackground()
{
    QPixmap background(":/images/images/new2.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio);

    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setPalette(palette);
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

