#include "starthistory.h"
#include "ui_starthistory.h"

StartHistory::StartHistory(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StartHistory)
{
    ui->setupUi(this);
}

StartHistory::~StartHistory()
{
    delete ui;
}

void StartHistory::on_pushButton_start_clicked()
{
    TitleScreen *titlescreen= new TitleScreen();
    titlescreen->show();
}

