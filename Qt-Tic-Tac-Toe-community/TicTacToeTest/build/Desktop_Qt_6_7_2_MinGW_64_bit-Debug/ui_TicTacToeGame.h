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
    QHBoxLayout *horizontalLayout_2;
    QPushButton *back;
    QLabel *label;
    QPushButton *reset;

    void setupUi(QDialog *TicTacToeGame)
    {
        if (TicTacToeGame->objectName().isEmpty())
            TicTacToeGame->setObjectName("TicTacToeGame");
        TicTacToeGame->setWindowModality(Qt::WindowModal);
        TicTacToeGame->resize(556, 368);
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

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        back = new QPushButton(TicTacToeGame);
        back->setObjectName("back");

        horizontalLayout_2->addWidget(back);

        label = new QLabel(TicTacToeGame);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        reset = new QPushButton(TicTacToeGame);
        reset->setObjectName("reset");

        horizontalLayout_2->addWidget(reset);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(TicTacToeGame);

        QMetaObject::connectSlotsByName(TicTacToeGame);
    } // setupUi

    void retranslateUi(QDialog *TicTacToeGame)
    {
        TicTacToeGame->setWindowTitle(QCoreApplication::translate("TicTacToeGame", "Tic Tac Toe", nullptr));
        back->setText(QCoreApplication::translate("TicTacToeGame", "Back to title screen", nullptr));
        label->setText(QString());
        reset->setText(QCoreApplication::translate("TicTacToeGame", "New Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicTacToeGame: public Ui_TicTacToeGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICTACTOEGAME_H
