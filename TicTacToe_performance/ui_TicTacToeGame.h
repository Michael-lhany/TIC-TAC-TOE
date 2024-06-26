/********************************************************************************
** Form generated from reading UI file 'TicTacToeGame.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
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
    QVBoxLayout *verticalLayout_3;  // New vertical layout for Player 1 and Player 2
    QPushButton *reset;
    QLabel *adell;
    QLabel *player2;  // Added Player 2 label
    QPushButton *back;

    void setupUi(QDialog *TicTacToeGame)
    {
        if (TicTacToeGame->objectName().isEmpty())
            TicTacToeGame->setObjectName("TicTacToeGame");
        TicTacToeGame->setWindowModality(Qt::WindowModal);
        TicTacToeGame->resize(564, 403);
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
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        reset = new QPushButton(groupBox);
        reset->setObjectName("reset");

        horizontalLayout_2->addWidget(reset);

        verticalLayout_3 = new QVBoxLayout();  // Create the new vertical layout
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");

        adell = new QLabel(groupBox);
        adell->setObjectName("adell");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font.setPointSize(13);
        font.setWeight(QFont::Bold);
        adell->setFont(font);
        adell->setStyleSheet(QString::fromUtf8("color: #1323ff;\n"
                                               "border-style: solid;\n"
                                               "border-radius: 15px;\n"
                                               "border-color: #000000;\n"
                                               "font-weight: bold;"));

        verticalLayout_3->addWidget(adell);

        player2 = new QLabel(groupBox);  // Added Player 2 label initialization
        player2->setObjectName("player2");
        player2->setFont(font);
        player2->setStyleSheet(QString::fromUtf8("color: #1323ff;\n"
                                                 "border-style: solid;\n"
                                                 "border-radius: 15px;\n"
                                                 "border-color: #000000;\n"
                                                 "font-weight: bold;"));

        verticalLayout_3->addWidget(player2);



        horizontalLayout_2->addLayout(verticalLayout_3);  // Add the vertical layout to the horizontal layout

        back = new QPushButton(groupBox);
        back->setObjectName("back");

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
        adell->setText(QCoreApplication::translate("TicTacToeGame", "Player 1 : 0", nullptr));
        player2->setText(QCoreApplication::translate("TicTacToeGame", "Player 2 : 0", nullptr));  // Added translation for Player 2
        back->setText(QCoreApplication::translate("TicTacToeGame", "Back to title screen", nullptr));
    } // retranslateUi

};

namespace Ui {
class TicTacToeGame: public Ui_TicTacToeGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICTACTOEGAME_H
