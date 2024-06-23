/********************************************************************************
** Form generated from reading UI file 'playerhistory.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERHISTORY_H
#define UI_PLAYERHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Playerhistory
{
public:
    QPushButton *return_2;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Playerhistory)
    {
        if (Playerhistory->objectName().isEmpty())
            Playerhistory->setObjectName("Playerhistory");
        Playerhistory->resize(400, 300);
        Playerhistory->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: #00111d;\n"
"	color: #000000;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        return_2 = new QPushButton(Playerhistory);
        return_2->setObjectName("return_2");
        return_2->setGeometry(QRect(150, 230, 101, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        return_2->setFont(font);
        return_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        groupBox = new QGroupBox(Playerhistory);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 40, 191, 91));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox \n"
"{\n"
"	background-color: #1f2b2b;\n"
"    border: 1px inset #000;\n"
"    margin-top: 22px;\n"
"	margin-left: 1px;\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox::title  \n"
"{\n"
"    background-color: #1f2b2b;\n"
"    color: #ffffff;\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"	margin-left: 1px;\n"
"    padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox::title::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"\n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 81, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"\n"
"}\n"
"\n"
"\n"
"QLabel::disabled\n"
"{\n"
"	background-color: transparent;\n"
"	color: #656565;\n"
"\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 30, 81, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"\n"
"}\n"
"\n"
"\n"
"QLabel::disabled\n"
"{\n"
"	background-color: transparent;\n"
"	color: #656565;\n"
"\n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 30, 81, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"\n"
"}\n"
"\n"
"\n"
"QLabel::disabled\n"
"{\n"
"	background-color: transparent;\n"
"	color: #656565;\n"
"\n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 60, 81, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #ffffff;\n"
"\n"
"}\n"
"\n"
"\n"
"QLabel::disabled\n"
"{\n"
"	background-color: transparent;\n"
"	color: #656565;\n"
"\n"
"}"));

        retranslateUi(Playerhistory);

        QMetaObject::connectSlotsByName(Playerhistory);
    } // setupUi

    void retranslateUi(QDialog *Playerhistory)
    {
        Playerhistory->setWindowTitle(QCoreApplication::translate("Playerhistory", "Dialog", nullptr));
        return_2->setText(QCoreApplication::translate("Playerhistory", "Return", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Playerhistory", "Player Name", nullptr));
        label->setText(QCoreApplication::translate("Playerhistory", "Games Won", nullptr));
        label_2->setText(QCoreApplication::translate("Playerhistory", "Games Played", nullptr));
        label_3->setText(QCoreApplication::translate("Playerhistory", "0", nullptr));
        label_4->setText(QCoreApplication::translate("Playerhistory", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Playerhistory: public Ui_Playerhistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERHISTORY_H
