/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_LogIn;
    QPushButton *pushButton_LogIn_3;
    QToolButton *toolButton;
    QLabel *label;
    QPushButton *pushButton_exit;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(800, 600);
        MainPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: #00111d;\n"
"	color: #000000;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 160, 160, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setBold(true);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #00111d;\n"
"	color: #717e87;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(290, 270, 160, 40));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #00111d;\n"
"	color: #717e87;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(350, 210, 400, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setKerning(true);
        lineEdit_username->setFont(font1);
        lineEdit_username->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	background-color: #082336;\n"
"	color: #3e93ff;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: #1e4b6d;\n"
"	padding: 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"QLineEdit::hover\n"
"{\n"
"	background-color: #082336;\n"
"	color: #3e93ca;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: #01dcff;\n"
"	padding: 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"QLineEdit::focus\n"
"{\n"
"	\n"
"	color: #3e93ca;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: #01dcff;\n"
"	padding: 10px;\n"
"\n"
"}"));
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(350, 320, 400, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(13);
        font2.setBold(true);
        lineEdit_password->setFont(font2);
        lineEdit_password->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	background-color: #082336;\n"
"	color: #3e93ff;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: #1e4b6d;\n"
"	padding: 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"QLineEdit::hover\n"
"{\n"
"	background-color: #082336;\n"
"	color: #3e93ca;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: #01dcff;\n"
"	padding: 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"QLineEdit::focus\n"
"{\n"
"	\n"
"	color: #3e93ca;\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: #01dcff;\n"
"	padding: 10px;\n"
"\n"
"}"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        pushButton_LogIn = new QPushButton(centralwidget);
        pushButton_LogIn->setObjectName("pushButton_LogIn");
        pushButton_LogIn->setGeometry(QRect(570, 430, 111, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        font3.setBold(true);
        pushButton_LogIn->setFont(font3);
        pushButton_LogIn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: #3de6af;\n"
"	color: #000000;\n"
"	border-style: solid;\n"
"	border-radius:15px;\n"
"	border-color: #000000;\n"
"	font-weight : bold;\n"
"	padding: 13px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: #3dffaf;\n"
"	color: #000000;\n"
"	border-style: solid;\n"
"	border-color: #000000;\n"
"	font-weight : bold;\n"
"	padding: 13px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #3dc8af;\n"
"	color: #000000;\n"
"	border-style: solid;\n"
"	border-color: #000000;\n"
"	font-weight : bold;\n"
"	padding: 13px;\n"
"\n"
"}"));
        pushButton_LogIn_3 = new QPushButton(centralwidget);
        pushButton_LogIn_3->setObjectName("pushButton_LogIn_3");
        pushButton_LogIn_3->setGeometry(QRect(340, 430, 201, 41));
        pushButton_LogIn_3->setFont(font3);
        pushButton_LogIn_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: #3de6af;\n"
"	color: #000000;\n"
"	border-style: solid;\n"
"	border-radius:15px;\n"
"	border-color: #000000;\n"
"	font-weight : bold;\n"
"	padding: 13px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: #3dffaf;\n"
"	color: #000000;\n"
"	border-style: solid;\n"
"	border-color: #000000;\n"
"	font-weight : bold;\n"
"	padding: 13px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #3dc8af;\n"
"	color: #000000;\n"
"	border-style: solid;\n"
"	border-color: #000000;\n"
"	font-weight : bold;\n"
"	padding: 13px;\n"
"\n"
"}"));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(310, 390, 23, 23));
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton::hover\n"
"{\n"
"	background-color: #00111d;\n"
"	color: #000000;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: #01dcff;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolButton::pressed\n"
"{\n"
"	background-color: #01dcff;\n"
"	color: #000000;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: #01dcff;\n"
"\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 390, 91, 16));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #00111d;\n"
"	color: #717e87;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setGeometry(QRect(690, 60, 51, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(17);
        font4.setBold(true);
        pushButton_exit->setFont(font4);
        pushButton_exit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: #3de6af;\n"
"	color: #000000;\n"
"	border-style: solid;\n"
"	border-radius:15px;\n"
"	border-color: #000000;\n"
"	font-weight : bold;\n"
"	padding: 13px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: #3dffaf;\n"
"	color: #000000;\n"
"	border-style: solid;\n"
"	border-color: #000000;\n"
"	font-weight : bold;\n"
"	padding: 13px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: #3dc8af;\n"
"	color: #000000;\n"
"	border-style: solid;\n"
"	border-color: #000000;\n"
"	font-weight : bold;\n"
"	padding: 13px;\n"
"\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(220, 70, 141, 51));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(27);
        font5.setBold(true);
        label_6->setFont(font5);
        label_6->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #00111d;\n"
"	color: #717e87;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        MainPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainPage->setMenuBar(menubar);
        statusbar = new QStatusBar(MainPage);
        statusbar->setObjectName("statusbar");
        MainPage->setStatusBar(statusbar);

        retranslateUi(MainPage);

        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage)
    {
        MainPage->setWindowTitle(QCoreApplication::translate("MainPage", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("MainPage", "User Name", nullptr));
        label_4->setText(QCoreApplication::translate("MainPage", "Password", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("MainPage", "Enter User Name", nullptr));
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("MainPage", "Enter Password", nullptr));
        pushButton_LogIn->setText(QCoreApplication::translate("MainPage", "Log In", nullptr));
        pushButton_LogIn_3->setText(QCoreApplication::translate("MainPage", "Create New Account", nullptr));
        toolButton->setText(QCoreApplication::translate("MainPage", "...", nullptr));
        label->setText(QCoreApplication::translate("MainPage", "Remeber Me", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("MainPage", "X", nullptr));
        label_6->setText(QCoreApplication::translate("MainPage", "Sign In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
