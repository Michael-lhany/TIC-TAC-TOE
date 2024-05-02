#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include"profile.h"
<<<<<<< HEAD
#include "signup.h"
=======

>>>>>>> d0fe8aef13dac56cc0444ec1b3f89ffb21a5452d
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

<<<<<<< HEAD
    void on_label_linkActivated(const QString &link);

    void on_checkBox_showpassword_stateChanged(int arg1);

    void on_pushButton_signup_clicked();

=======
>>>>>>> d0fe8aef13dac56cc0444ec1b3f89ffb21a5452d
private:
    Ui::MainPage *ui;

signals:
/**
     * @brief exited is emitted to manually handle the close functionality.
     */
void exited();
};
#endif // MAINPAGE_H
