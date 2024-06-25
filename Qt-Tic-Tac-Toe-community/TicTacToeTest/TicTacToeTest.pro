GOOGLETEST_DIR = C:\Users\hp\Desktop\Last\googletest-main

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG += thread
CONFIG += qt

HEADERS += \
    tst_board.h \
    tst_minimaxagent.h

SOURCES += \
        main.cpp

include(source.pri)
