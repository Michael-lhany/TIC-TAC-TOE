#include "lastpositiondisplay.h"
#include "ui_lastpositiondisplay.h"

lastpositiondisplay::lastpositiondisplay(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::lastpositiondisplay)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/images/images/icon1.png"));
    setWindowTitle("Tic Tac Toe");  // Set the custom title text
}

lastpositiondisplay::~lastpositiondisplay()
{
    delete ui;
}

void lastpositiondisplay::updateBoard( QString &lastPosition) {
    if (lastPosition.length() != 9) {
        qDebug() << "Invalid board string length";
        return;
    }

    for (int i = 0; i < 9; ++i) {
        QString buttonName = QString("button_%1_%2").arg(i / 3).arg(i % 3);
        QPushButton *button = findChild<QPushButton *>(buttonName);
        if (button) {
            QChar mark = lastPosition[i];
            if (mark == 'X' || mark == 'O') {
                button->setText(mark);

                // Apply style to the button text
                QString style = "font: 50px \"Verdana\";"
                                "min-height: 100px;"
                                "max-height: 100px;"
                                "min-width: 100px;"
                                "max-width: 100px;"
                                "color: %1;";
                if (mark == 'X') {
                    style = style.arg("blue"); // Set color blue for X
                } else if (mark == 'O') {
                    style = style.arg("orange"); // Set color orange for O
                }
                button->setStyleSheet(style);
            } else {
                button->setText("");
            }
        }
    }

}
