GOOGLETEST_DIR = C:\Users\hp\Desktop\Last\googletest-main

QT       += multimedia

QT       += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG += thread
CONFIG += qt

HEADERS += \
    BoardTest.h \
    MinimaxagentTest.h

SOURCES += \
        main.cpp

include(TestFiles.pri)
