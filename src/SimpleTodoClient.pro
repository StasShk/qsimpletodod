#-------------------------------------------------
#
# Project created by QtCreator 2016-11-30T12:39:52
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SimpleTodoClient
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    networkmanger.cpp

HEADERS  += mainwindow.h \
    networkmanger.h

FORMS    += mainwindow.ui
