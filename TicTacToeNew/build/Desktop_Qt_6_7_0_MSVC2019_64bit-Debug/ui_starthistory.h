/********************************************************************************
** Form generated from reading UI file 'starthistory.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTHISTORY_H
#define UI_STARTHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Starthistory
{
public:
    QPushButton *pushButton_start;
    QPushButton *pushButton_profile;

    void setupUi(QDialog *Starthistory)
    {
        if (Starthistory->objectName().isEmpty())
            Starthistory->setObjectName("Starthistory");
        Starthistory->resize(400, 300);
        Starthistory->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: #00111d;\n"
"	color: #000000;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        pushButton_start = new QPushButton(Starthistory);
        pushButton_start->setObjectName("pushButton_start");
        pushButton_start->setGeometry(QRect(120, 100, 151, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        pushButton_start->setFont(font);
        pushButton_start->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_profile = new QPushButton(Starthistory);
        pushButton_profile->setObjectName("pushButton_profile");
        pushButton_profile->setGeometry(QRect(140, 160, 111, 51));
        pushButton_profile->setFont(font);
        pushButton_profile->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        retranslateUi(Starthistory);

        QMetaObject::connectSlotsByName(Starthistory);
    } // setupUi

    void retranslateUi(QDialog *Starthistory)
    {
        Starthistory->setWindowTitle(QCoreApplication::translate("Starthistory", "Dialog", nullptr));
        pushButton_start->setText(QCoreApplication::translate("Starthistory", "Game Play", nullptr));
        pushButton_profile->setText(QCoreApplication::translate("Starthistory", "Profile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Starthistory: public Ui_Starthistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTHISTORY_H
