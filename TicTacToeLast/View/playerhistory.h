#ifndef PLAYERHISTORY_H
#define PLAYERHISTORY_H

#include <QDialog>

namespace Ui {
class Playerhistory;
}

class Playerhistory : public QDialog
{
    Q_OBJECT

public:
    explicit Playerhistory(QWidget *parent = nullptr);
    ~Playerhistory();

private slots:
    void on_return_2_clicked();

private:
    Ui::Playerhistory *ui;
};

#endif // PLAYERHISTORY_H
