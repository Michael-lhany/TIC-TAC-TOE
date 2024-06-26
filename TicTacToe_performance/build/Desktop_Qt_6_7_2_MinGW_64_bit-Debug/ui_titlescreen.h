/********************************************************************************
** Form generated from reading UI file 'titlescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLESCREEN_H
#define UI_TITLESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TitleScreen
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *Logo;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QSlider *boardSize;
    QLabel *boardSizeValue;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *onePlayer;
    QRadioButton *twoPlayers;
    QLabel *label_3;
    QCheckBox *AIStarts;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_6;
    QSlider *miniMaxDepth;
    QLabel *miniMaxDepthValue;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *startGame;
    QPushButton *newButton;

    void setupUi(QMainWindow *TitleScreen)
    {
        if (TitleScreen->objectName().isEmpty())
            TitleScreen->setObjectName("TitleScreen");
        TitleScreen->resize(500, 600);
        TitleScreen->setMinimumSize(QSize(500, 600));
        TitleScreen->setMaximumSize(QSize(500, 607));
        TitleScreen->setStyleSheet(QString::fromUtf8("QWidget\n"
                                                     "{\n"
                                                     "	background-color: #ffffff;\n"
                                                     "	color: #000000;\n"
                                                     "	border-color:#000000;\n"
                                                     "\n"
                                                     "}"));
        centralwidget = new QWidget(TitleScreen);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Logo = new QLabel(centralwidget);
        Logo->setObjectName("Logo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Logo->sizePolicy().hasHeightForWidth());
        Logo->setSizePolicy(sizePolicy);
        Logo->setMaximumSize(QSize(256, 256));
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/images/images/icon.png")));
        Logo->setScaledContents(true);
        Logo->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Logo);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Verdana")});
        font.setPointSize(30);
        font.setBold(true);
        font.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
                                               "{\n"
                                               "	background-color: rgba(0, 0, 0, 0);\n"
                                               "	color: #1323ff;\n"
                                               "	border-color: #000000;\n"
                                               "\n"
                                               "}"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(0);

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(15);
        formLayout->setVerticalSpacing(12);
        formLayout->setContentsMargins(20, 20, 20, 20);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
                                                 "{\n"
                                                 "	background-color: rgba(0,0,0,0);\n"
                                                 "	color: #1323ff;\n"
                                                 "	font: 700 10pt \"Segoe UI\";\n"
                                                 "	border-color: #000000;\n"
                                                 "\n"
                                                 "}"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(15);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        boardSize = new QSlider(groupBox);
        boardSize->setObjectName("boardSize");
        boardSize->setStyleSheet(QString::fromUtf8("QSlider \n"
                                                   "{\n"
                                                   "	background-color: transparent;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "QSlider::groove:horizontal \n"
                                                   "{\n"
                                                   "	background-color: transparent;\n"
                                                   "	height: 5px;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QSlider::sub-page:horizontal \n"
                                                   "{\n"
                                                   "	background-color: #41cd52;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QSlider::add-page:horizontal \n"
                                                   "{\n"
                                                   "	background-color: #a9a9aa;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QSlider::handle:horizontal \n"
                                                   "{\n"
                                                   "	background-color: #41cd52;\n"
                                                   "	width: 14px;\n"
                                                   "	margin-top: -6px;\n"
                                                   "	margin-bottom: -6px;\n"
                                                   "	border-radius: 3px;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QSlider::handle:horizontal:hover \n"
                                                   "{\n"
                                                   "	background-color: #22af00;\n"
                                                   "	border-radius: 3px;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QSlider::sub-page:horizontal:disabled \n"
                                                   "{\n"
                                                   "	background-color: #bbb;\n"
                                                   "	border-color: #999;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QSlider::add-page:horizontal:disabled \n"
                                                   "{\n"
                                                   "	background-color: #eee;\n"
                                                   "	border-color: #999;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QSlider::handle:horizontal:disabled \n"
                                                   "{\n"
                                                   "	background-color: #eee;\n"
                                                   "	border: 1px solid #aaa;\n"
                                                   ""
                                                   "	border-radius: 3px;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QSlider::groove:vertical \n"
                                                   "{\n"
                                                   "	background-color: transparent;\n"
                                                   "	width: 5px;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QSlider::sub-page:vertical \n"
                                                   "{\n"
                                                   "	background-color: #41cd52;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QSlider::add-page:vertical \n"
                                                   "{\n"
                                                   "	background-color: #a9a9aa;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QSlider::handle:vertical \n"
                                                   "{\n"
                                                   "	background-color: #41cd52;\n"
                                                   "	height: 14px;\n"
                                                   "	margin-left: -6px;\n"
                                                   "	margin-right: -6px;\n"
                                                   "	border-radius: 3px;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QSlider::handle:vertical:hover \n"
                                                   "{\n"
                                                   "	background-color: #22af00;\n"
                                                   "	border-radius: 3px;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QSlider::sub-page:vertical:disabled \n"
                                                   "{\n"
                                                   "	background-color: #bbb;\n"
                                                   "	border-color: #999;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QSlider::add-page:vertical:disabled \n"
                                                   "{\n"
                                                   "	background-color: #eee;\n"
                                                   "	border-color: #999;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QSlider::handle:vertical:disabled \n"
                                                   "{\n"
                                                   "	background-color: #eee;\n"
                                                   "	border: 1px solid #aaa;\n"
                                                   "	border-radius: 3px;\n"
                                                   "\n"
                                                   "}"));
        boardSize->setMinimum(3);
        boardSize->setMaximum(10);
        boardSize->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(boardSize);

        boardSizeValue = new QLabel(groupBox);
        boardSizeValue->setObjectName("boardSizeValue");
        boardSizeValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(boardSizeValue);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_5);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
                                                 "{\n"
                                                 "	background-color: rgba(0,0,0,0);\n"
                                                 "	color: #1323ff;\n"
                                                 "	font: 700 10pt \"Segoe UI\";\n"
                                                 "	border-color: #000000;\n"
                                                 "\n"
                                                 "}"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        onePlayer = new QRadioButton(groupBox);
        onePlayer->setObjectName("onePlayer");
        onePlayer->setStyleSheet(QString::fromUtf8("QRadioButton\n"
                                                   "{\n"
                                                   "    background-color: transparent;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QRadioButton::indicator::unchecked\n"
                                                   "{ \n"
                                                   "	border: 1px inset gray; \n"
                                                   "	border-radius: 5px; \n"
                                                   "	background-color:  #a9a9aa;\n"
                                                   "	width: 9px; \n"
                                                   "	height: 9px; \n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QRadioButton::indicator::unchecked:hover\n"
                                                   "{ \n"
                                                   "	border: 1px inset #2aaaa8; \n"
                                                   "	border-radius: 5px; \n"
                                                   "	background-color: gray;\n"
                                                   "	width: 9px; \n"
                                                   "	height: 9px; \n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QRadioButton::indicator::checked\n"
                                                   "{ \n"
                                                   "	border: 1px solid #607cff; \n"
                                                   "	border-radius: 5px; \n"
                                                   "	background-color: #58fa53; \n"
                                                   "	width: 9px; \n"
                                                   "	height: 9px; \n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QRadioButton::disabled\n"
                                                   "{\n"
                                                   "	color: #656565;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QRadioButton::indicator:disabled\n"
                                                   "{\n"
                                                   "	background-color: #656565;\n"
                                                   "	color: #656565;\n"
                                                   "    border: 2px solid #656565;\n"
                                                   "\n"
                                                   "}"));
        onePlayer->setChecked(true);

        horizontalLayout_3->addWidget(onePlayer);

        twoPlayers = new QRadioButton(groupBox);
        twoPlayers->setObjectName("twoPlayers");
        twoPlayers->setStyleSheet(QString::fromUtf8("QRadioButton\n"
                                                    "{\n"
                                                    "    background-color: transparent;\n"
                                                    "\n"
                                                    "}\n"
                                                    "\n"
                                                    "\n"
                                                    "QRadioButton::indicator::unchecked\n"
                                                    "{ \n"
                                                    "	border: 1px inset gray; \n"
                                                    "	border-radius: 5px; \n"
                                                    "	background-color:  #a9a9aa;\n"
                                                    "	width: 9px; \n"
                                                    "	height: 9px; \n"
                                                    "\n"
                                                    "}\n"
                                                    "\n"
                                                    "\n"
                                                    "QRadioButton::indicator::unchecked:hover\n"
                                                    "{ \n"
                                                    "	border: 1px inset #2aaaa8; \n"
                                                    "	border-radius: 5px; \n"
                                                    "	background-color: gray;\n"
                                                    "	width: 9px; \n"
                                                    "	height: 9px; \n"
                                                    "\n"
                                                    "}\n"
                                                    "\n"
                                                    "\n"
                                                    "QRadioButton::indicator::checked\n"
                                                    "{ \n"
                                                    "	border: 1px solid #607cff; \n"
                                                    "	border-radius: 5px; \n"
                                                    "	background-color: #58fa53; \n"
                                                    "	width: 9px; \n"
                                                    "	height: 9px; \n"
                                                    "\n"
                                                    "}\n"
                                                    "\n"
                                                    "\n"
                                                    "QRadioButton::disabled\n"
                                                    "{\n"
                                                    "	color: #656565;\n"
                                                    "\n"
                                                    "}\n"
                                                    "\n"
                                                    "\n"
                                                    "QRadioButton::indicator:disabled\n"
                                                    "{\n"
                                                    "	background-color: #656565;\n"
                                                    "	color: #656565;\n"
                                                    "    border: 2px solid #656565;\n"
                                                    "\n"
                                                    "}"));
        twoPlayers->setChecked(false);

        horizontalLayout_3->addWidget(twoPlayers);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_3);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
                                                 "{\n"
                                                 "	background-color: rgba(0,0,0,0);\n"
                                                 "	color: #1323ff;\n"
                                                 "	font: 700 10pt \"Segoe UI\";\n"
                                                 "	border-color: #000000;\n"
                                                 "\n"
                                                 "}"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        AIStarts = new QCheckBox(groupBox);
        AIStarts->setObjectName("AIStarts");
        AIStarts->setEnabled(true);
        AIStarts->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(2, QFormLayout::FieldRole, AIStarts);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
                                                 "{\n"
                                                 "	background-color: rgba(0,0,0,0);\n"
                                                 "	color: #1323ff;\n"
                                                 "	font: 700 10pt \"Segoe UI\";\n"
                                                 "	border-color: #000000;\n"
                                                 "\n"
                                                 "}"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(15);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        miniMaxDepth = new QSlider(groupBox);
        miniMaxDepth->setObjectName("miniMaxDepth");
        miniMaxDepth->setEnabled(true);
        miniMaxDepth->setStyleSheet(QString::fromUtf8("QSlider \n"
                                                      "{\n"
                                                      "	background-color: transparent;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "QSlider::groove:horizontal \n"
                                                      "{\n"
                                                      "	background-color: transparent;\n"
                                                      "	height: 5px;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "\n"
                                                      "QSlider::sub-page:horizontal \n"
                                                      "{\n"
                                                      "	background-color: #41cd52;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "\n"
                                                      "QSlider::add-page:horizontal \n"
                                                      "{\n"
                                                      "	background-color: #a9a9aa;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "\n"
                                                      "QSlider::handle:horizontal \n"
                                                      "{\n"
                                                      "	background-color: #41cd52;\n"
                                                      "	width: 14px;\n"
                                                      "	margin-top: -6px;\n"
                                                      "	margin-bottom: -6px;\n"
                                                      "	border-radius: 3px;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "\n"
                                                      "QSlider::handle:horizontal:hover \n"
                                                      "{\n"
                                                      "	background-color: #22af00;\n"
                                                      "	border-radius: 3px;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "\n"
                                                      "QSlider::sub-page:horizontal:disabled \n"
                                                      "{\n"
                                                      "	background-color: #bbb;\n"
                                                      "	border-color: #999;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "\n"
                                                      "QSlider::add-page:horizontal:disabled \n"
                                                      "{\n"
                                                      "	background-color: #eee;\n"
                                                      "	border-color: #999;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "\n"
                                                      "QSlider::handle:horizontal:disabled \n"
                                                      "{\n"
                                                      "	background-color: #eee;\n"
                                                      "	border: 1px solid #aaa;\n"
                                                      ""
                                                      "	border-radius: 3px;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "\n"
                                                      "QSlider::groove:vertical \n"
                                                      "{\n"
                                                      "	background-color: transparent;\n"
                                                      "	width: 5px;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "\n"
                                                      "QSlider::sub-page:vertical \n"
                                                      "{\n"
                                                      "	background-color: #41cd52;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "\n"
                                                      "QSlider::add-page:vertical \n"
                                                      "{\n"
                                                      "	background-color: #a9a9aa;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "\n"
                                                      "QSlider::handle:vertical \n"
                                                      "{\n"
                                                      "	background-color: #41cd52;\n"
                                                      "	height: 14px;\n"
                                                      "	margin-left: -6px;\n"
                                                      "	margin-right: -6px;\n"
                                                      "	border-radius: 3px;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "\n"
                                                      "QSlider::handle:vertical:hover \n"
                                                      "{\n"
                                                      "	background-color: #22af00;\n"
                                                      "	border-radius: 3px;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "\n"
                                                      "QSlider::sub-page:vertical:disabled \n"
                                                      "{\n"
                                                      "	background-color: #bbb;\n"
                                                      "	border-color: #999;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "\n"
                                                      "QSlider::add-page:vertical:disabled \n"
                                                      "{\n"
                                                      "	background-color: #eee;\n"
                                                      "	border-color: #999;\n"
                                                      "\n"
                                                      "}\n"
                                                      "\n"
                                                      "\n"
                                                      "QSlider::handle:vertical:disabled \n"
                                                      "{\n"
                                                      "	background-color: #eee;\n"
                                                      "	border: 1px solid #aaa;\n"
                                                      "	border-radius: 3px;\n"
                                                      "\n"
                                                      "}"));
        miniMaxDepth->setMinimum(1);
        miniMaxDepth->setMaximum(20);
        miniMaxDepth->setValue(3);
        miniMaxDepth->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(miniMaxDepth);

        miniMaxDepthValue = new QLabel(groupBox);
        miniMaxDepthValue->setObjectName("miniMaxDepthValue");
        miniMaxDepthValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(miniMaxDepthValue);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_6);


        verticalLayout_3->addLayout(formLayout);


        verticalLayout->addWidget(groupBox);
        /////////////////////////////////////////////////////////======================================================
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        startGame = new QPushButton(centralwidget);
        startGame->setObjectName("startGame");
        sizePolicy.setHeightForWidth(startGame->sizePolicy().hasHeightForWidth());
        startGame->setSizePolicy(sizePolicy);
        startGame->setMinimumSize(QSize(200, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        startGame->setFont(font2);
        startGame->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        ///////////////////////////////
        newButton = new QPushButton(centralwidget);
        newButton->setObjectName("newButton");
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(newButton->sizePolicy().hasHeightForWidth());
        newButton->setSizePolicy(sizePolicy);
        newButton->setMinimumSize(QSize(200, 30));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        newButton->setFont(font4);
        newButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
                                                   "{\n"
                                                   "    background-color:#e3e3e3;\n"
                                                   "    color: #1323ff;\n"
                                                   "    border-style: solid;\n"
                                                   "    border-radius:15px;\n"
                                                   "    border-color: #000000;\n"
                                                   "    font-weight : bold;\n"
                                                   "    padding: 13px;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QPushButton::hover\n"
                                                   "{\n"
                                                   "    background-color: #3dffaf;\n"
                                                   "    color: #000000;\n"
                                                   "    border-style: solid;\n"
                                                   "    border-color: #000000;\n"
                                                   "    font-weight : bold;\n"
                                                   "    padding: 13px;\n"
                                                   "\n"
                                                   "}\n"
                                                   "\n"
                                                   "\n"
                                                   "QPushButton::pressed\n"
                                                   "{\n"
                                                   "    background-color: #3dc8af;\n"
                                                   "    color: #000000;\n"
                                                   "    border-style: solid;\n"
                                                   "    border-color: #000000;\n"
                                                   "    font-weight : bold;\n"
                                                   "    padding: 13px;\n"
                                                   "\n"
                                                   "}"));

        /////////////////////////////
        ///

        horizontalLayout_2->addWidget(startGame);
        horizontalLayout_2->addWidget(newButton);

        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        TitleScreen->setCentralWidget(centralwidget);

        retranslateUi(TitleScreen);

        QMetaObject::connectSlotsByName(TitleScreen);
    } // setupUi

    void retranslateUi(QMainWindow *TitleScreen)
    {
        TitleScreen->setWindowTitle(QCoreApplication::translate("TitleScreen", "Tic Tac Toe", nullptr));
        Logo->setText(QString());
        label->setText(QCoreApplication::translate("TitleScreen", "TIC TAC TOE", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TitleScreen", "                                                                   Game Options", nullptr));
        label_5->setText(QCoreApplication::translate("TitleScreen", "Board Size", nullptr));
        boardSizeValue->setText(QCoreApplication::translate("TitleScreen", "3", nullptr));
        label_2->setText(QCoreApplication::translate("TitleScreen", "Number of Players", nullptr));
        onePlayer->setText(QCoreApplication::translate("TitleScreen", "1 Player (vs AI)", nullptr));
        twoPlayers->setText(QCoreApplication::translate("TitleScreen", "2 Players", nullptr));
        label_3->setText(QCoreApplication::translate("TitleScreen", "AI starts first", nullptr));
        AIStarts->setText(QString());
        label_4->setText(QCoreApplication::translate("TitleScreen", "Difficulty level", nullptr));
        miniMaxDepthValue->setText(QCoreApplication::translate("TitleScreen", "3", nullptr));
        startGame->setText(QCoreApplication::translate("TitleScreen", "Start Game", nullptr));
        newButton->setText(QCoreApplication::translate("TitleScreen", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
class TitleScreen: public Ui_TitleScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLESCREEN_H
