/********************************************************************************
** Form generated from reading UI file 'howtoplay.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOWTOPLAY_H
#define UI_HOWTOPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_howtoplay
{
public:
    QLabel *label;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *gifLabel;

    void setupUi(QDialog *howtoplay)
    {
        if (howtoplay->objectName().isEmpty())
            howtoplay->setObjectName("howtoplay");
        howtoplay->setEnabled(false);
        howtoplay->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(howtoplay->sizePolicy().hasHeightForWidth());
        howtoplay->setSizePolicy(sizePolicy);
        howtoplay->setMinimumSize(QSize(800, 600));
        howtoplay->setMaximumSize(QSize(1000, 1000));
        howtoplay->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-color: #e3e3e3;\n"
"    color: white;\n"
"}"));
        label = new QLabel(howtoplay);
        label->setObjectName("label");
        label->setGeometry(QRect(10, -100, 981, 351));
        label_8 = new QLabel(howtoplay);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 40, 491, 191));
        label_9 = new QLabel(howtoplay);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 200, 511, 181));
        label_5 = new QLabel(howtoplay);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 330, 1971, 311));
        gifLabel = new QLabel(howtoplay);
        gifLabel->setObjectName("gifLabel");
        gifLabel->setGeometry(QRect(420, 180, 411, 231));

        retranslateUi(howtoplay);

        QMetaObject::connectSlotsByName(howtoplay);
    } // setupUi

    void retranslateUi(QDialog *howtoplay)
    {
        howtoplay->setWindowTitle(QCoreApplication::translate("howtoplay", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("howtoplay", "<html><head/><body><h1 style=\" margin-top:20px; margin-bottom:12px; margin-left:20px; margin-right:20px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial','sans-serif'; font-size:24pt; font-weight:700; color:#0000ff;\">TIC TAC TOE</span></h1><p><span style=\" font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; color:#ff0000;\">-You probably already know how to play Tic-Tac-Toe. It's a really simple game, right? That's what most people think.</span></p><p><span style=\" font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; color:#ff0000;\">But if you really wrap your brain around it, you'll discover that Tic-Tac-Toe isn't quite as simple as you think!.</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("howtoplay", "<html><head/><body><p><span style=\" color:#55aa00;\"><br/></span></p><p><span style=\" font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; color:#55aa00;\">-TicTacToe (along with other games) involves looking ahead, trying</span></p><p><span style=\" font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; color:#55aa00;\">to figure out what the person playing against you might do next.</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("howtoplay", "<html><head/><body><p><span style=\" font-family:'Arial','sans-serif'; font-size:xx-large; font-weight:700; color:#0055ff;\">Rules for Tic Tac Toe</span></p><p><span style=\" font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; color:#aa5500;\">1) The game is played on a grid that's 3 squares by 3 squares.</span></p><p><span style=\" font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; color:#aa5500;\">2) You are X , your friend (or the computer in this case) is O .</span></p><p><span style=\" font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; color:#aa5500;\">Players take turns putting their marks in empty squares. </span></p><p><span style=\" font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; color:#aa5500;\">3) The first player to get 3 of her marks in a row </span></p><p><span style=\" font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; co"
                        "lor:#aa5500;\">(up, down, across,or diagonally) is the winner.</span></p><p><span style=\" font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; color:#aa5500;\">4) When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie.</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("howtoplay", "<html><head/><body><p><span style=\" font-family:'Arial','sans-serif'; font-size:xx-large; font-weight:700; color:#0055ff;\">How can I win at Tic-Tac-Toe?</span></p><p><span style=\" font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; color:#ffaa00;\">To beat the computer (or at least tie), you need to make use of a little bit of strategy.Strategy means figuring out</span></p><p><span style=\" font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; color:#ffaa00;\">what you need to do to win.</span></p><p><span style=\" font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; color:#ffaa00;\">Part of your strategy is trying to figure out how to get three X s in a row. The other part is trying to figure out how</span></p><p><span style=\" font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; color:#ffaa00;\">to stop the computer from getting three O s in a row..</span></p><p><span style=\""
                        " font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; color:#ffaa00;\">If you always pay attention and look ahead, you'll never lose a game of Tic-Tac-Toe. You may not win,</span></p><p><span style=\" font-family:'Arial','sans-serif'; font-size:14px; font-weight:700; font-style:italic; color:#ffaa00;\">but at least you'll tie.</span></p><p><br/></p></body></html>", nullptr));
        gifLabel->setText(QCoreApplication::translate("howtoplay", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class howtoplay: public Ui_howtoplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOWTOPLAY_H
