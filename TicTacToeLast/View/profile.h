#ifndef PROFILE_H
#define PROFILE_H

#include <QDialog>
#include"TitleScreen.h"
#include"playerhistory.h"
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

private:
    Ui::Profile *ui;
};

#endif // PROFILE_H
