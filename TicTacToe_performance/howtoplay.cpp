#include "howtoplay.h"
#include "ui_howtoplay.h"

howtoplay::howtoplay(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::howtoplay)
, movie(new QMovie(":/images/images/tic.gif"))
{
    ui->setupUi(this);

    setWindowIcon(QIcon(":/images/images/icon1.png"));
    setWindowTitle("How to play Tic Tac Toe");  // Set the custom title text
    ui->gifLabel->setMovie(movie);
    movie->start();

}

howtoplay::~howtoplay()
{
    delete ui;
    delete movie;
}

void howtoplay::on_howtoplay_accepted()
{
    // Custom behavior when the dialog is accepted
}

void howtoplay::on_verticalScrollBar_actionTriggered(int action)
{
    // Handle vertical scrollbar actions here
}

void howtoplay::on_label_linkActivated(const QString &link)
{
    // Handle link activation here
}

void howtoplay::on_howtoplay_destroyed()
{
    // Handle any cleanup needed when the dialog is destroyed
}
