#ifndef PROFILE_H
#define PROFILE_H

#include <QDialog>
#include"TitleScreen.h"
<<<<<<< HEAD
#include"playerhistory.h"
=======
>>>>>>> d0fe8aef13dac56cc0444ec1b3f89ffb21a5452d
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

<<<<<<< HEAD
    void on_profile_clicked();

=======
>>>>>>> d0fe8aef13dac56cc0444ec1b3f89ffb21a5452d
private:
    Ui::Profile *ui;
};

#endif // PROFILE_H
