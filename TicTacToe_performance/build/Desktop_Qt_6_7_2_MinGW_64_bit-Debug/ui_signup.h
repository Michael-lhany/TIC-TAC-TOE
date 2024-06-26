/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_password_2;
    QPushButton *pushButton_Register;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(645, 420);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("appointment-new")));
        signup->setWindowIcon(icon);
        signup->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: #00111d;\n"
"	color: #000000;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        layoutWidget = new QWidget(signup);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 50, 541, 262));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
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

        verticalLayout->addWidget(label_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #00111d;\n"
"	color: #717e87;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_2);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #00111d;\n"
"	color: #717e87;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName("lineEdit_username");
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

        verticalLayout_2->addWidget(lineEdit_username);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName("lineEdit_password");
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

        verticalLayout_2->addWidget(lineEdit_password);

        lineEdit_password_2 = new QLineEdit(layoutWidget);
        lineEdit_password_2->setObjectName("lineEdit_password_2");
        lineEdit_password_2->setFont(font2);
        lineEdit_password_2->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        lineEdit_password_2->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineEdit_password_2);


        horizontalLayout->addLayout(verticalLayout_2);

        pushButton_Register = new QPushButton(signup);
        pushButton_Register->setObjectName("pushButton_Register");
        pushButton_Register->setGeometry(QRect(210, 340, 217, 49));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Register->sizePolicy().hasHeightForWidth());
        pushButton_Register->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("SimSun")});
        font3.setPointSize(15);
        font3.setBold(true);
        pushButton_Register->setFont(font3);
        pushButton_Register->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Tic Tac Toe", nullptr));
        label_5->setText(QCoreApplication::translate("signup", "Username :", nullptr));
        label_4->setText(QCoreApplication::translate("signup", "Password :", nullptr));
        label_6->setText(QCoreApplication::translate("signup", "Confirm password :", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("signup", "Enter User Name", nullptr));
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("signup", "Enter Password", nullptr));
        lineEdit_password_2->setText(QString());
        lineEdit_password_2->setPlaceholderText(QCoreApplication::translate("signup", "Enter Password", nullptr));
        pushButton_Register->setText(QCoreApplication::translate("signup", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
