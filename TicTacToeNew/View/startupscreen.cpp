#include "startupscreen.h"
#include "ui_startupscreen.h"

StartupScreen::StartupScreen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StartupScreen)
{
    ui->setupUi(this);
}

StartupScreen::~StartupScreen()
{
    delete ui;
}
