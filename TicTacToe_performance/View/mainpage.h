#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include"profile.h"
#include "signup.h"
#include <QSoundEffect>  // Include QSound
#include <QLabel>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QString>

namespace Ui {
class MainPage;
}

class MainPage : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();
protected:
    void resizeEvent(QResizeEvent *event) override; // Declare resizeEvent here

private slots:
    void on_pushButton_LogIn_clicked();

    void on_pushButton_exit_clicked();

    void on_pushButton_LogIn_pressed();

    void on_label_linkActivated(const QString &link);

    void on_checkBox_showpassword_stateChanged(int arg1);

    void on_pushButton_signup_clicked();

    void on_label_5_linkActivated(const QString &link);
    bool verifyLogin(const QString& username, const QString& password);



private:
    Ui::MainPage *ui;
    QSoundEffect clickSound;  // Add a member for the sound effect
    void setMainPageBackground();
    QSqlDatabase m_db;

signals:
/**
     * @brief exited is emitted to manually handle the close functionality.
     */
void exited();
};
#endif // MAINPAGE_H
