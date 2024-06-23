#include "TicTacToeGame.h"
#include "TitleScreen.h"
#include "mainpage.h"
#include <QApplication>
#include <gtest/gtest.h>
int main(int argc, char *argv[]) {
    // Disabled QuitOnLastWindowClosed to avoid the dialog closing after QMessageBox is closed.
    qApp->setQuitOnLastWindowClosed(false);

    QApplication a(argc, argv);
    MainPage mainScreen;
    // The Main window must handle the close event manually to avoid the program running after closing it.
    QObject::connect(&mainScreen, &MainPage::exited, &a, &QApplication::quit);
    mainScreen.show();

    return a.exec();
}

