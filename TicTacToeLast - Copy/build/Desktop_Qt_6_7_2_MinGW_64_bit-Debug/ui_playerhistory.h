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
#include <QtWidgets/QComboBox>
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
    QLabel *gameplayedd;
    QLabel *drawsLabel;
    QLabel *label_5;
    QLabel *winsLabel;
    QLabel *label_7;
    QLabel *lossesLabel;
    QLabel *name;
    QComboBox *gameComboBox;

    void setupUi(QDialog *Playerhistory)
    {
        if (Playerhistory->objectName().isEmpty())
            Playerhistory->setObjectName("Playerhistory");
        Playerhistory->resize(641, 400);
        Playerhistory->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0.100962 rgba(34, 166, 178, 255),stop:0.543269 rgba(132, 213, 51, 255),stop:1 rgba(208, 255, 163, 255));\n"
"	color: #ffffff;\n"
"	font-weight: bold;\n"
"	border-color: #051a39;\n"
"	selection-background-color: #3b7e48;\n"
"\n"
"}"));
        return_2 = new QPushButton(Playerhistory);
        return_2->setObjectName("return_2");
        return_2->setGeometry(QRect(270, 340, 101, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        return_2->setFont(font);
        return_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        groupBox = new QGroupBox(Playerhistory);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(100, 0, 501, 131));
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
        gameplayedd = new QLabel(groupBox);
        gameplayedd->setObjectName("gameplayedd");
        gameplayedd->setGeometry(QRect(100, 30, 81, 31));
        gameplayedd->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        drawsLabel = new QLabel(groupBox);
        drawsLabel->setObjectName("drawsLabel");
        drawsLabel->setGeometry(QRect(170, 90, 81, 31));
        drawsLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(170, 60, 81, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        winsLabel = new QLabel(groupBox);
        winsLabel->setObjectName("winsLabel");
        winsLabel->setGeometry(QRect(10, 90, 81, 31));
        winsLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(360, 60, 81, 31));
        label_7->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        lossesLabel = new QLabel(groupBox);
        lossesLabel->setObjectName("lossesLabel");
        lossesLabel->setGeometry(QRect(360, 90, 81, 31));
        lossesLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
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
        name = new QLabel(groupBox);
        name->setObjectName("name");
        name->setGeometry(QRect(90, 0, 71, 21));
        gameComboBox = new QComboBox(Playerhistory);
        gameComboBox->setObjectName("gameComboBox");
        gameComboBox->setGeometry(QRect(30, 140, 601, 21));

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
        gameplayedd->setText(QCoreApplication::translate("Playerhistory", "0", nullptr));
        drawsLabel->setText(QCoreApplication::translate("Playerhistory", "0", nullptr));
        label_5->setText(QCoreApplication::translate("Playerhistory", "Games Drawn", nullptr));
        winsLabel->setText(QCoreApplication::translate("Playerhistory", "0", nullptr));
        label_7->setText(QCoreApplication::translate("Playerhistory", "Games Lose", nullptr));
        lossesLabel->setText(QCoreApplication::translate("Playerhistory", "0", nullptr));
        name->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Playerhistory: public Ui_Playerhistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERHISTORY_H
