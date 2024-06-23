#ifndef PLAYERHISTORY_H
#define PLAYERHISTORY_H

#include <QDialog>
#include <QSoundEffect>  // Include QSound

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
    QSoundEffect clickSound;  // Add a member for the sound effect
};

#endif // PLAYERHISTORY_H
