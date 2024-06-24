#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include <QSoundEffect>  // Include QSound
#include <QtSql>
#include <QSqlDatabase>
// #include "mainpage.h"
#include <QString>
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
     void on_pushButton_Register_clicked();
     bool registerUser(const QString& username, const QByteArray& passwordHash);

private:
    Ui::signup *ui;
    QSoundEffect clickSound;  // Add a member for the sound effect
    QSqlDatabase m_db;

};

#endif // SIGNUP_H
