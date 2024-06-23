#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include"profile.h"
#include "signup.h"
#include <QSoundEffect>  // Include QSound
namespace Ui {
class MainPage;
}

class MainPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();

private slots:
    void on_pushButton_LogIn_clicked();

    void on_pushButton_exit_clicked();

    void on_pushButton_LogIn_pressed();

    void on_label_linkActivated(const QString &link);

    void on_checkBox_showpassword_stateChanged(int arg1);

    void on_pushButton_signup_clicked();

private:
    Ui::MainPage *ui;
    QSoundEffect clickSound;  // Add a member for the sound effect

signals:
/**
     * @brief exited is emitted to manually handle the close functionality.
     */
void exited();
};
#endif // MAINPAGE_H
