/*#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginButton_clicked();
    void on_registerButton_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase m_db;

    void createConnection();
    bool verifyLogin(const QString& username, const QString& password);
    bool registerUser(const QString& username, const QString& password);
};
*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginButton_clicked();
    void on_registerLink_clicked();
    void on_registerButton_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase m_db;

    bool verifyLogin(const QString& username, const QString& password);
    bool registerUser(const QString& username, const QByteArray& passwordHash);
    void showLogin();
    void showRegistration();
};

#endif // MAINWINDOW_H
