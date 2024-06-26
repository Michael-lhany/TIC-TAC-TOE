/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_LogIn;
    QPushButton *pushButton_signup;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_showpassword;
    QCheckBox *checkBox_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_exit;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(675, 514);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("appointment-new")));
        MainPage->setWindowIcon(icon);
        MainPage->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(390, 350, 219, 105));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_LogIn = new QPushButton(layoutWidget);
        pushButton_LogIn->setObjectName("pushButton_LogIn");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_LogIn->sizePolicy().hasHeightForWidth());
        pushButton_LogIn->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("SimSun")});
        font.setPointSize(12);
        font.setBold(true);
        pushButton_LogIn->setFont(font);
        pushButton_LogIn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#e3e3e3;\n"
"	color: #1323ff;\n"
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

        verticalLayout->addWidget(pushButton_LogIn);

        pushButton_signup = new QPushButton(layoutWidget);
        pushButton_signup->setObjectName("pushButton_signup");
        sizePolicy.setHeightForWidth(pushButton_signup->sizePolicy().hasHeightForWidth());
        pushButton_signup->setSizePolicy(sizePolicy);
        pushButton_signup->setFont(font);
        pushButton_signup->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#e3e3e3;\n"
"	color: #1323ff;\n"
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

        verticalLayout->addWidget(pushButton_signup);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(70, 340, 201, 51));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox_showpassword = new QCheckBox(layoutWidget1);
        checkBox_showpassword->setObjectName("checkBox_showpassword");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("SimSun")});
        font1.setPointSize(12);
        checkBox_showpassword->setFont(font1);
        checkBox_showpassword->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"	background-color: transparent;\n"
"	color: #FFFFFF;\n"
"	border-color: #000000;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator\n"
"{\n"
"    color: #ffffff;\n"
"    background-color: #00111d;\n"
"    border: 1px solid #2aaaa8;\n"
"    width: 12px;\n"
"    height: 12px;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(\"./ressources/check.png\"); /*To replace*/\n"
"	background-color: #1f2b2b;\n"
"    border: 1px solid #2aaaa8;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:unchecked:hover\n"
"{\n"
"    border: 1px solid #2aaaa8;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::disabled\n"
"{\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"    border: 1px solid #656565;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(checkBox_showpassword);

        checkBox_2 = new QCheckBox(layoutWidget1);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setFont(font1);
        checkBox_2->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"	background-color: transparent;\n"
"	color: #FFFFFF;\n"
"	border-color: #000000;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #00111d;\n"
"    border: 1px solid #2aaaa8;\n"
"    width: 12px;\n"
"    height: 12px;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(\"./ressources/check.png\"); /*To replace*/\n"
"	background-color: #1f2b2b;\n"
"    border: 1px solid #2aaaa8;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:unchecked:hover\n"
"{\n"
"    border: 1px solid #2aaaa8;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::disabled\n"
"{\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"    border: 1px solid #656565;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(checkBox_2);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(42, 152, 561, 141));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");
        label_5->setEnabled(true);
        label_5->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("SimSun")});
        font2.setPointSize(14);
        font2.setBold(true);
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;;\n"
"	color: #ffffff;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_5);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color:transparent;\n"
"	color: #ffffff;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        lineEdit_username = new QLineEdit(layoutWidget2);
        lineEdit_username->setObjectName("lineEdit_username");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("SimSun")});
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setKerning(true);
        lineEdit_username->setFont(font3);
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

        verticalLayout_3->addWidget(lineEdit_username);

        lineEdit_password = new QLineEdit(layoutWidget2);
        lineEdit_password->setObjectName("lineEdit_password");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("SimSun")});
        font4.setPointSize(13);
        font4.setBold(true);
        lineEdit_password->setFont(font4);
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

        verticalLayout_3->addWidget(lineEdit_password);


        horizontalLayout->addLayout(verticalLayout_3);

        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setGeometry(QRect(570, 40, 51, 41));
        sizePolicy.setHeightForWidth(pushButton_exit->sizePolicy().hasHeightForWidth());
        pushButton_exit->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("SimSun")});
        font5.setPointSize(16);
        font5.setBold(true);
        pushButton_exit->setFont(font5);
        pushButton_exit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#e3e3e3;\n"
"	color: #1323ff;\n"
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
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setEnabled(true);
        label_7->setGeometry(QRect(70, 60, 111, 51));
        label_7->setMinimumSize(QSize(0, 0));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("SimSun")});
        font6.setPointSize(22);
        font6.setBold(true);
        label_7->setFont(font6);
        label_7->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #FFFFFF;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        MainPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 675, 21));
        MainPage->setMenuBar(menubar);
        statusbar = new QStatusBar(MainPage);
        statusbar->setObjectName("statusbar");
        MainPage->setStatusBar(statusbar);

        retranslateUi(MainPage);

        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage)
    {
        MainPage->setWindowTitle(QCoreApplication::translate("MainPage", "Tic Tac Toe", nullptr));
        pushButton_LogIn->setText(QCoreApplication::translate("MainPage", "Log In", nullptr));
        pushButton_signup->setText(QCoreApplication::translate("MainPage", "Create New Account", nullptr));
        checkBox_showpassword->setText(QCoreApplication::translate("MainPage", "Show password", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainPage", "Remember me", nullptr));
        label_5->setText(QCoreApplication::translate("MainPage", "Username:", nullptr));
        label_4->setText(QCoreApplication::translate("MainPage", "Password:", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("MainPage", "Enter User Name", nullptr));
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("MainPage", "Enter Password", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("MainPage", "x", nullptr));
        label_7->setText(QCoreApplication::translate("MainPage", "Sign In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
