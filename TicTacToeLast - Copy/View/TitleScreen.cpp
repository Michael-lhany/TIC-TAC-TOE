#include "TitleScreen.h"
#include "TTTController.h"
#include "starthistory.h"
#include"Global_variables.h"
bool Ai_checked;

TitleScreen::TitleScreen(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::TitleScreen)
{
    ui->setupUi(this);
    setConnections();
    setWindowIcon(QIcon(":/images/images/icon1.png"));
    clickSound.setSource(QUrl::fromLocalFile(":/images/images/click_sound.wav"));
    clickSound.setVolume(0.1f);  // Set volume to 25%
}

void TitleScreen::setConnections()
{
    connect(ui->boardSize, SIGNAL(valueChanged(int)), SLOT(updateBoardSize(int)));
    connect(ui->onePlayer, SIGNAL(toggled(bool)), SLOT(updateSinglePlayer(bool)));
    connect(ui->twoPlayers, SIGNAL(toggled(bool)), SLOT(updateTwoPlayers(bool)));
    connect(ui->AIStarts, SIGNAL(toggled(bool)), SLOT(updateAIstartsGame(bool)));
    connect(ui->miniMaxDepth, SIGNAL(valueChanged(int)), SLOT(updateMiniMaxDepth(int)));
    connect(ui->startGame, SIGNAL(clicked()), SLOT(startGame()));
    connect(ui->newButton, SIGNAL(clicked()), SLOT(newButton()));
}

void TitleScreen::updateBoardSize(int size)
{
    ui->boardSizeValue->setText(QString::number(size));
    options_.boardSize = static_cast<size_t>(size);
}

void TitleScreen::updateSinglePlayer(bool checked)
{
    Ai_checked=checked;
    if (checked) {
        //who=true;
        ui->AIStarts->setEnabled(true);
        ui->miniMaxDepth->setEnabled(true);
        options_.AIopponent = true;
    }
}

void TitleScreen::updateTwoPlayers(bool checked)
{
    if (checked) {
        //who=false;
        ui->AIStarts->setEnabled(false);
        ui->miniMaxDepth->setEnabled(false);
        options_.AIopponent = false;
    }
    // Update the player names in TicTacToeGame

}

void TitleScreen::updateAIstartsGame(bool checked)
{
    if (checked)
    {options_.AIstarts = true;
        Ai_checked=true;
    }
    else
    {options_.AIstarts = false; Ai_checked=false;
    }
}

void TitleScreen::updateMiniMaxDepth(int depth)
{
    ui->miniMaxDepthValue->setText(QString::number(depth));
    options_.miniMaxDepth = static_cast<unsigned short>(depth);
}

void TitleScreen::startGame()
{clickSound.play();
    this->hide();
    TTTController ttt(options_);
    ttt.startGame();
    this->show();
}
void TitleScreen::newButton()
{clickSound.play();
    this->hide();
    Profile *profile= new Profile();
    profile->show();
}
void TitleScreen::closeEvent(QCloseEvent *event)
{
    QMainWindow::closeEvent(event);
    emit exited();
}
