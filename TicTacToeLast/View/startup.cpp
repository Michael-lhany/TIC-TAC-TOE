#include "startup.h"
#include "ui_startup.h"
#include "TitleScreen.h"
#include "ui_TitleScreen.h"

Startup::Startup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Startup)
{
    ui->setupUi(this);
}

Startup::~Startup()
{
    delete ui;
}
