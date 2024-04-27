#ifndef STARTUPSCREEN_H
#define STARTUPSCREEN_H

#include <QDialog>

namespace Ui {
class StartupScreen;
}

class StartupScreen : public QDialog
{
    Q_OBJECT

public:
    explicit StartupScreen(QWidget *parent = nullptr);
    ~StartupScreen();

private:
    Ui::StartupScreen *ui;
};

#endif // STARTUPSCREEN_H
