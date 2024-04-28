#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>

namespace Ui {
class StartUp;
}

class StartUp : public QDialog
{
    Q_OBJECT

public:
    explicit StartUp(QWidget *parent = nullptr);
    ~StartUp();

private slots:
    void on_pushButton_LogIn_clicked();

private:
    Ui::StartUp *ui;
};

#endif // SECDIALOG_H
