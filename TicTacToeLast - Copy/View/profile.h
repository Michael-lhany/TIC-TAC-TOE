#ifndef PROFILE_H
#define PROFILE_H

#include <QDialog>
#include"TitleScreen.h"
#include"playerhistory.h"
#include"howtoplay.h"
#include <QSoundEffect>  // Include QSound
namespace Ui {
class Profile;
}

class Profile : public QDialog
{
    Q_OBJECT

public:
    explicit Profile(QWidget *parent = nullptr);
    ~Profile();

private slots:
    void on_start_clicked();

    void on_profile_clicked();

    void on_how_clicked();

    void on_groupBox_clicked();

private:
    Ui::Profile *ui;
   QSoundEffect clickSound;  // Add a member for the sound effect
};

#endif // PROFILE_H
