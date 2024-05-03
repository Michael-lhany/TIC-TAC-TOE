/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Vertical_Layout;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_8;
    QTextEdit *UsernameTextEdit;
    QLineEdit *usernameLineEdit;
    QTextEdit *textEdit_6;
    QLineEdit *passwordLineEdit;
    QPushButton *loginButton;
    QPushButton *registerLink;
    QWidget *registrationPage;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_29;
    QTextEdit *textEdit_30;
    QTextEdit *textEdit_28;
    QLineEdit *usernameLineEdit_register;
    QTextEdit *textEdit_26;
    QLineEdit *passwordLineEdit_2;
    QTextEdit *textEdit_27;
    QLineEdit *passwordLineEdit_3;
    QPushButton *registerButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(622, 577);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(30, 10, 551, 541));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(verticalLayoutWidget_4);
        stackedWidget->setObjectName("stackedWidget");
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        verticalLayoutWidget = new QWidget(loginPage);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 20, 451, 451));
        Vertical_Layout = new QVBoxLayout(verticalLayoutWidget);
        Vertical_Layout->setObjectName("Vertical_Layout");
        Vertical_Layout->setContentsMargins(0, 0, 0, 0);
        textEdit_2 = new QTextEdit(verticalLayoutWidget);
        textEdit_2->setObjectName("textEdit_2");

        Vertical_Layout->addWidget(textEdit_2);

        textEdit_8 = new QTextEdit(verticalLayoutWidget);
        textEdit_8->setObjectName("textEdit_8");

        Vertical_Layout->addWidget(textEdit_8);

        UsernameTextEdit = new QTextEdit(verticalLayoutWidget);
        UsernameTextEdit->setObjectName("UsernameTextEdit");

        Vertical_Layout->addWidget(UsernameTextEdit);

        usernameLineEdit = new QLineEdit(verticalLayoutWidget);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setInputMethodHints(Qt::ImhNone);

        Vertical_Layout->addWidget(usernameLineEdit);

        textEdit_6 = new QTextEdit(verticalLayoutWidget);
        textEdit_6->setObjectName("textEdit_6");

        Vertical_Layout->addWidget(textEdit_6);

        passwordLineEdit = new QLineEdit(verticalLayoutWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        Vertical_Layout->addWidget(passwordLineEdit);

        loginButton = new QPushButton(verticalLayoutWidget);
        loginButton->setObjectName("loginButton");

        Vertical_Layout->addWidget(loginButton);

        registerLink = new QPushButton(verticalLayoutWidget);
        registerLink->setObjectName("registerLink");

        Vertical_Layout->addWidget(registerLink);

        stackedWidget->addWidget(loginPage);
        registrationPage = new QWidget();
        registrationPage->setObjectName("registrationPage");
        verticalLayoutWidget_3 = new QWidget(registrationPage);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(60, 10, 421, 503));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit_29 = new QTextEdit(verticalLayoutWidget_3);
        textEdit_29->setObjectName("textEdit_29");

        verticalLayout->addWidget(textEdit_29);

        textEdit_30 = new QTextEdit(verticalLayoutWidget_3);
        textEdit_30->setObjectName("textEdit_30");

        verticalLayout->addWidget(textEdit_30);

        textEdit_28 = new QTextEdit(verticalLayoutWidget_3);
        textEdit_28->setObjectName("textEdit_28");

        verticalLayout->addWidget(textEdit_28);

        usernameLineEdit_register = new QLineEdit(verticalLayoutWidget_3);
        usernameLineEdit_register->setObjectName("usernameLineEdit_register");

        verticalLayout->addWidget(usernameLineEdit_register);

        textEdit_26 = new QTextEdit(verticalLayoutWidget_3);
        textEdit_26->setObjectName("textEdit_26");

        verticalLayout->addWidget(textEdit_26);

        passwordLineEdit_2 = new QLineEdit(verticalLayoutWidget_3);
        passwordLineEdit_2->setObjectName("passwordLineEdit_2");
        passwordLineEdit_2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passwordLineEdit_2);

        textEdit_27 = new QTextEdit(verticalLayoutWidget_3);
        textEdit_27->setObjectName("textEdit_27");

        verticalLayout->addWidget(textEdit_27);

        passwordLineEdit_3 = new QLineEdit(verticalLayoutWidget_3);
        passwordLineEdit_3->setObjectName("passwordLineEdit_3");
        passwordLineEdit_3->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        passwordLineEdit_3->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passwordLineEdit_3);

        registerButton = new QPushButton(verticalLayoutWidget_3);
        registerButton->setObjectName("registerButton");

        verticalLayout->addWidget(registerButton);

        stackedWidget->addWidget(registrationPage);

        verticalLayout_4->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt;\">TIC-TAC-TOE</span></p></body></html>", nullptr));
        textEdit_8->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#55aa7f;\">WELCOME TO TIC-TAC-TOE GAME!</span></p></body></html>", nullptr));
        UsernameTextEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">USERNAME:</span></p></body></html>", nullptr));
        usernameLineEdit->setText(QString());
        textEdit_6->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Password:</span></p></body></html>", nullptr));
        passwordLineEdit->setText(QString());
        loginButton->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        registerLink->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        textEdit_29->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt;\">TIC-TAC-TOE</span></p></body></html>", nullptr));
        textEdit_30->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#55aa7f;\">Please enter your information for registration</span></p></body></html>", nullptr));
        textEdit_28->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">USERNAME:</span></p></body></html>", nullptr));
        usernameLineEdit_register->setText(QString());
        textEdit_26->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Password:</span></p></body></html>", nullptr));
        passwordLineEdit_2->setText(QString());
        textEdit_27->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">confirm Password:</span></p></body></html>", nullptr));
        passwordLineEdit_3->setText(QString());
        registerButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
