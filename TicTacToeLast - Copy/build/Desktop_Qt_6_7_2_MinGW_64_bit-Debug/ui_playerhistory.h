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
    QComboBox *gameComboBox;
    QPushButton *return_2;
    QGroupBox *groupBox_2;
    QLabel *name;
    QLabel *label_2;
    QLabel *gameplayedd;
    QLabel *label;
    QLabel *winsLabel;
    QLabel *label_7;
    QLabel *lossesLabel;
    QLabel *label_5;
    QLabel *drawsLabel;

    void setupUi(QDialog *Playerhistory)
    {
        if (Playerhistory->objectName().isEmpty())
            Playerhistory->setObjectName("Playerhistory");
        Playerhistory->resize(641, 400);
        Playerhistory->setStyleSheet(QString::fromUtf8(""));
        gameComboBox = new QComboBox(Playerhistory);
        gameComboBox->setObjectName("gameComboBox");
        gameComboBox->setGeometry(QRect(30, 210, 601, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("SimSun")});
        font.setBold(true);
        gameComboBox->setFont(font);
        return_2 = new QPushButton(Playerhistory);
        return_2->setObjectName("return_2");
        return_2->setGeometry(QRect(260, 340, 111, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(return_2->sizePolicy().hasHeightForWidth());
        return_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("SimSun")});
        font1.setPointSize(12);
        font1.setBold(true);
        return_2->setFont(font1);
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
        groupBox_2 = new QGroupBox(Playerhistory);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(160, 10, 291, 181));
        groupBox_2->setFont(font1);
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox \n"
"{\n"
"	background-color: #00111d;\n"
"	border: 2px solid gray;\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox::title  \n"
"{\n"
"    background-color: #00111d;\n"
"    color: #ffffff;\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top;\n"
"}\n"
"\n"
"\n"
"QGroupBox::title::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"\n"
"}"));
        name = new QLabel(groupBox_2);
        name->setObjectName("name");
        name->setGeometry(QRect(120, 0, 71, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("SimSun")});
        font2.setPointSize(14);
        font2.setBold(true);
        name->setFont(font2);
        name->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #1323ff;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 20, 101, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("SimSun")});
        font3.setPointSize(10);
        font3.setBold(true);
        label_2->setFont(font3);
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
        gameplayedd = new QLabel(groupBox_2);
        gameplayedd->setObjectName("gameplayedd");
        gameplayedd->setGeometry(QRect(150, 30, 81, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("SimSun")});
        font4.setPointSize(11);
        font4.setBold(true);
        gameplayedd->setFont(font4);
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
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 70, 81, 31));
        label->setFont(font3);
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
        winsLabel = new QLabel(groupBox_2);
        winsLabel->setObjectName("winsLabel");
        winsLabel->setGeometry(QRect(110, 70, 81, 31));
        winsLabel->setFont(font3);
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
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(150, 70, 81, 31));
        label_7->setFont(font3);
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
        lossesLabel = new QLabel(groupBox_2);
        lossesLabel->setObjectName("lossesLabel");
        lossesLabel->setGeometry(QRect(250, 70, 81, 31));
        lossesLabel->setFont(font3);
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
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 110, 101, 31));
        label_5->setFont(font3);
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
        drawsLabel = new QLabel(groupBox_2);
        drawsLabel->setObjectName("drawsLabel");
        drawsLabel->setGeometry(QRect(130, 110, 81, 31));
        drawsLabel->setFont(font3);
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

        retranslateUi(Playerhistory);

        QMetaObject::connectSlotsByName(Playerhistory);
    } // setupUi

    void retranslateUi(QDialog *Playerhistory)
    {
        Playerhistory->setWindowTitle(QCoreApplication::translate("Playerhistory", "Dialog", nullptr));
        return_2->setText(QCoreApplication::translate("Playerhistory", "Return", nullptr));
        groupBox_2->setTitle(QString());
        name->setText(QString());
        label_2->setText(QCoreApplication::translate("Playerhistory", "Games Played", nullptr));
        gameplayedd->setText(QCoreApplication::translate("Playerhistory", "0", nullptr));
        label->setText(QCoreApplication::translate("Playerhistory", "Games Won", nullptr));
        winsLabel->setText(QCoreApplication::translate("Playerhistory", "0", nullptr));
        label_7->setText(QCoreApplication::translate("Playerhistory", "Games Lose", nullptr));
        lossesLabel->setText(QCoreApplication::translate("Playerhistory", "0", nullptr));
        label_5->setText(QCoreApplication::translate("Playerhistory", "Games Drawn", nullptr));
        drawsLabel->setText(QCoreApplication::translate("Playerhistory", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Playerhistory: public Ui_Playerhistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERHISTORY_H
