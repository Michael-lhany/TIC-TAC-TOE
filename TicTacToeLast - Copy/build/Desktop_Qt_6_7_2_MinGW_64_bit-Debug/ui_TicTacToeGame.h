/********************************************************************************
** Form generated from reading UI file 'TicTacToeGame.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICTACTOEGAME_H
#define UI_TICTACTOEGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TicTacToeGame
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridBoard;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *reset;
    QLabel *label;
    QPushButton *back;

    void setupUi(QDialog *TicTacToeGame)
    {
        if (TicTacToeGame->objectName().isEmpty())
            TicTacToeGame->setObjectName("TicTacToeGame");
        TicTacToeGame->setWindowModality(Qt::WindowModal);
        TicTacToeGame->resize(555, 399);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TicTacToeGame->sizePolicy().hasHeightForWidth());
        TicTacToeGame->setSizePolicy(sizePolicy);
        TicTacToeGame->setMinimumSize(QSize(0, 0));
        TicTacToeGame->setMaximumSize(QSize(16777215, 16777215));
        TicTacToeGame->setStyleSheet(QString::fromUtf8("QPushButton[cell=true]{\n"
"font: 50px \"Verdana\";\n"
"min-height: 100px;\n"
"max-height: 100px;\n"
"min-width: 100px;\n"
"max-width: 100px;\n"
"}\n"
""));
        verticalLayout_2 = new QVBoxLayout(TicTacToeGame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        gridBoard = new QGridLayout();
        gridBoard->setSpacing(0);
        gridBoard->setObjectName("gridBoard");

        verticalLayout->addLayout(gridBoard);

        groupBox = new QGroupBox(TicTacToeGame);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: #00111d;\n"
"	color: #ffffff;\n"
"	border-color: #000000;\n"
"\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        reset = new QPushButton(groupBox);
        reset->setObjectName("reset");
        reset->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout_2->addWidget(reset);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font.setPointSize(13);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        back = new QPushButton(groupBox);
        back->setObjectName("back");
        back->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        horizontalLayout_2->addWidget(back);


        verticalLayout->addWidget(groupBox);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(TicTacToeGame);

        QMetaObject::connectSlotsByName(TicTacToeGame);
    } // setupUi

    void retranslateUi(QDialog *TicTacToeGame)
    {
        TicTacToeGame->setWindowTitle(QCoreApplication::translate("TicTacToeGame", "Tic Tac Toe", nullptr));
        reset->setText(QCoreApplication::translate("TicTacToeGame", "New Game", nullptr));
        label->setText(QString());
        back->setText(QCoreApplication::translate("TicTacToeGame", "Back to title screen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicTacToeGame: public Ui_TicTacToeGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICTACTOEGAME_H
