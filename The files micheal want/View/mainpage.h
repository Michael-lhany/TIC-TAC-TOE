#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include"TitleScreen.h"
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

private:
    Ui::MainPage *ui;

signals:
/**
     * @brief exited is emitted to manually handle the close functionality.
     */
void exited();
};
#endif // MAINPAGE_H
