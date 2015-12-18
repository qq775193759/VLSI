#-------------------------------------------------
#
# Project created by QtCreator 2015-12-18T20:57:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VLSI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    line.cpp \
    linemaker.cpp \
    point.cpp

HEADERS  += mainwindow.h \
    line.h \
    linemaker.h \
    point.h

FORMS    += mainwindow.ui
