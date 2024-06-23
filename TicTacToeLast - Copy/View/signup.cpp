#include "signup.h"
#include "ui_signup.h"
#include <QPixmap>
signup::signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);


setWindowIcon(QIcon(":/images/images/icon1.png"));
    setWindowTitle("Tic Tac Toe");  // Set the custom title text
    clickSound.setSource(QUrl::fromLocalFile(":/images/images/click_sound.wav"));
    clickSound.setVolume(0.1f);  // Set volume to 25%

}

signup::~signup()
{
    delete ui;
}

void signup::on_pushButton_LogIn_clicked()
{
clickSound.play();
}

