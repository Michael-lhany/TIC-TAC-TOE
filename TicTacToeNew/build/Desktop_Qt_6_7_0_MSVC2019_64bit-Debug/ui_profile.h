/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QPushButton *start;
    QPushButton *profile;

    void setupUi(QDialog *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName("Profile");
        Profile->resize(400, 300);
        Profile->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: #00111d;\n"
"	color: #000000;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        start = new QPushButton(Profile);
        start->setObjectName("start");
        start->setGeometry(QRect(110, 90, 171, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        start->setFont(font);
        start->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        profile = new QPushButton(Profile);
        profile->setObjectName("profile");
        profile->setGeometry(QRect(140, 160, 111, 51));
        profile->setFont(font);
        profile->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QDialog *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "Dialog", nullptr));
        start->setText(QCoreApplication::translate("Profile", "Play", nullptr));
        profile->setText(QCoreApplication::translate("Profile", "Profile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
