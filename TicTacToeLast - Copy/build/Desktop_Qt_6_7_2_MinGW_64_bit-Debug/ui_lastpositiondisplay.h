/********************************************************************************
** Form generated from reading UI file 'lastpositiondisplay.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LASTPOSITIONDISPLAY_H
#define UI_LASTPOSITIONDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lastpositiondisplay
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *button_0_1;
    QPushButton *button_0_0;
    QPushButton *button_2_1;
    QPushButton *button_0_2;
    QPushButton *button_2_0;
    QPushButton *button_1_1;
    QPushButton *button_2_2;
    QPushButton *button_1_0;
    QPushButton *button_1_2;

    void setupUi(QDialog *lastpositiondisplay)
    {
        if (lastpositiondisplay->objectName().isEmpty())
            lastpositiondisplay->setObjectName("lastpositiondisplay");
        lastpositiondisplay->resize(393, 324);
        gridLayoutWidget = new QWidget(lastpositiondisplay);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(9, 10, 371, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button_0_1 = new QPushButton(gridLayoutWidget);
        button_0_1->setObjectName("button_0_1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_0_1->sizePolicy().hasHeightForWidth());
        button_0_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_0_1, 0, 1, 1, 1);

        button_0_0 = new QPushButton(gridLayoutWidget);
        button_0_0->setObjectName("button_0_0");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_0_0->sizePolicy().hasHeightForWidth());
        button_0_0->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_0_0, 0, 0, 1, 1);

        button_2_1 = new QPushButton(gridLayoutWidget);
        button_2_1->setObjectName("button_2_1");
        sizePolicy1.setHeightForWidth(button_2_1->sizePolicy().hasHeightForWidth());
        button_2_1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_2_1, 3, 1, 1, 1);

        button_0_2 = new QPushButton(gridLayoutWidget);
        button_0_2->setObjectName("button_0_2");
        sizePolicy1.setHeightForWidth(button_0_2->sizePolicy().hasHeightForWidth());
        button_0_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_0_2, 0, 2, 1, 1);

        button_2_0 = new QPushButton(gridLayoutWidget);
        button_2_0->setObjectName("button_2_0");
        sizePolicy1.setHeightForWidth(button_2_0->sizePolicy().hasHeightForWidth());
        button_2_0->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_2_0, 3, 0, 1, 1);

        button_1_1 = new QPushButton(gridLayoutWidget);
        button_1_1->setObjectName("button_1_1");
        sizePolicy1.setHeightForWidth(button_1_1->sizePolicy().hasHeightForWidth());
        button_1_1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_1_1, 1, 1, 1, 1);

        button_2_2 = new QPushButton(gridLayoutWidget);
        button_2_2->setObjectName("button_2_2");
        sizePolicy1.setHeightForWidth(button_2_2->sizePolicy().hasHeightForWidth());
        button_2_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_2_2, 3, 2, 1, 1);

        button_1_0 = new QPushButton(gridLayoutWidget);
        button_1_0->setObjectName("button_1_0");
        sizePolicy1.setHeightForWidth(button_1_0->sizePolicy().hasHeightForWidth());
        button_1_0->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(button_1_0, 1, 0, 1, 1);

        button_1_2 = new QPushButton(gridLayoutWidget);
        button_1_2->setObjectName("button_1_2");
        sizePolicy.setHeightForWidth(button_1_2->sizePolicy().hasHeightForWidth());
        button_1_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_1_2, 1, 2, 1, 1);


        retranslateUi(lastpositiondisplay);

        QMetaObject::connectSlotsByName(lastpositiondisplay);
    } // setupUi

    void retranslateUi(QDialog *lastpositiondisplay)
    {
        lastpositiondisplay->setWindowTitle(QCoreApplication::translate("lastpositiondisplay", "Dialog", nullptr));
        button_0_1->setText(QString());
        button_0_0->setText(QString());
        button_2_1->setText(QString());
        button_0_2->setText(QString());
        button_2_0->setText(QString());
        button_1_1->setText(QString());
        button_2_2->setText(QString());
        button_1_0->setText(QString());
        button_1_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class lastpositiondisplay: public Ui_lastpositiondisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LASTPOSITIONDISPLAY_H
