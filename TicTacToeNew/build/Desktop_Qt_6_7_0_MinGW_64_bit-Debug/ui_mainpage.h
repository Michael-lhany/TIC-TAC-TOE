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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_LogIn;
    QLabel *label_5;
    QPushButton *pushButton_exit;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(800, 600);
        MainPage->setStyleSheet(QString::fromUtf8("Qlabel\n"
"{\n"
" background-color:rgb(52,50,64);\n"
" color:white;\n"
"}"));
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        pushButton_LogIn = new QPushButton(centralwidget);
        pushButton_LogIn->setObjectName("pushButton_LogIn");
        pushButton_LogIn->setGeometry(QRect(470, 400, 141, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(15);
        font.setBold(true);
        pushButton_LogIn->setFont(font);
        pushButton_LogIn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border:none;\n"
"	background-color:rgb(28, 130, 255);\n"
"	border-radius:15px;\n"
"	color:black;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"	border:none;\n"
"	background-color:rgb(28, 130, 255);\n"
"	border-radius:15px;\n"
"	color:white;\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"	border:5px solid rgb(241,92,34);\n"
"	background-color:rgb(28, 130, 255);\n"
"	border-radius:15px;\n"
"	color:red;\n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 180, 160, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        font1.setBold(true);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color:rgb(90,90,100);\n"
"}"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setGeometry(QRect(710, 50, 71, 41));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        pushButton_exit->setFont(font2);
        pushButton_exit->setMouseTracking(true);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("text-x-generic")));
        pushButton_exit->setIcon(icon);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(240, 50, 171, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Palatino Linotype")});
        font3.setPointSize(35);
        font3.setBold(true);
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(310, 290, 160, 40));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color:rgb(90,90,100);\n"
"}"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(350, 210, 400, 50));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(13);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setKerning(true);
        lineEdit_username->setFont(font4);
        lineEdit_username->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: none;\n"
"  	border-bottom: 3px solid rgb(241,92,34);\n"
"    background-color: Transparent;\n"
"	color:black;\n"
"	padding:5px 5px 5px 5px;\n"
"}\n"
"QLineEdit:Focus\n"
"{\n"
"	 border: 2px solid rgb(241,92,34);\n"
"}"));
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(350, 320, 400, 50));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(13);
        font5.setBold(true);
        lineEdit_password->setFont(font5);
        lineEdit_password->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: none;\n"
"  	border-bottom: 3px solid rgb(241,92,34);\n"
"    background-color: Transparent;\n"
"	color:black;\n"
"	padding:5px 5px 5px 5px;\n"
"}\n"
"QLineEdit:Focus\n"
"{\n"
"	 border: 2px solid rgb(241,92,34);\n"
"}"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
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
        pushButton_LogIn->setText(QCoreApplication::translate("MainPage", "Log In", nullptr));
        label_5->setText(QCoreApplication::translate("MainPage", "User Name", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("MainPage", "X", nullptr));
        label_3->setText(QCoreApplication::translate("MainPage", "Sign In", nullptr));
        label_4->setText(QCoreApplication::translate("MainPage", "Password", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("MainPage", "Enter User Name", nullptr));
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("MainPage", "Enter Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
