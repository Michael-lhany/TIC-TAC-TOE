#ifndef STARTHISTORY_H
#define STARTHISTORY_H

#include <QDialog>
#include "TitleScreen.h"
namespace Ui {
class StartHistory;
}

class StartHistory : public QDialog
{
    Q_OBJECT

public:
    explicit StartHistory(QWidget *parent = nullptr);
    ~StartHistory();

private slots:
    void on_pushButton_start_clicked();

private:
    Ui::StartHistory *ui;
};

#endif // STARTHISTORY_H
