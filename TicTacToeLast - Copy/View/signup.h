#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include <QSoundEffect>  // Include QSound
namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_pushButton_LogIn_clicked();

private:
    Ui::signup *ui;
    QSoundEffect clickSound;  // Add a member for the sound effect
};

#endif // SIGNUP_H
