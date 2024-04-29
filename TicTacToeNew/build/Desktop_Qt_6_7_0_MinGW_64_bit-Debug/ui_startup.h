/********************************************************************************
** Form generated from reading UI file 'startup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTUP_H
#define UI_STARTUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Startup
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_CreNewACC;
    QPushButton *pushButton_LogIn;
    QLabel *label_forgottenPass;

    void setupUi(QDialog *Startup)
    {
        if (Startup->objectName().isEmpty())
            Startup->setObjectName("Startup");
        Startup->resize(530, 444);
        groupBox = new QGroupBox(Startup);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(140, 110, 251, 201));
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(70, 50, 151, 24));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(70, 80, 151, 24));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 50, 61, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 80, 51, 20));
        pushButton_CreNewACC = new QPushButton(groupBox);
        pushButton_CreNewACC->setObjectName("pushButton_CreNewACC");
        pushButton_CreNewACC->setGeometry(QRect(70, 170, 121, 24));
        pushButton_LogIn = new QPushButton(groupBox);
        pushButton_LogIn->setObjectName("pushButton_LogIn");
        pushButton_LogIn->setGeometry(QRect(100, 110, 51, 21));
        label_forgottenPass = new QLabel(groupBox);
        label_forgottenPass->setObjectName("label_forgottenPass");
        label_forgottenPass->setGeometry(QRect(80, 140, 111, 16));

        retranslateUi(Startup);

        QMetaObject::connectSlotsByName(Startup);
    } // setupUi

    void retranslateUi(QDialog *Startup)
    {
        Startup->setWindowTitle(QCoreApplication::translate("Startup", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Startup", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("Startup", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("Startup", "Password", nullptr));
        pushButton_CreNewACC->setText(QCoreApplication::translate("Startup", "Create New Account", nullptr));
        pushButton_LogIn->setText(QCoreApplication::translate("Startup", "Log in", nullptr));
        label_forgottenPass->setText(QCoreApplication::translate("Startup", "Forgotten password?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Startup: public Ui_Startup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUP_H
