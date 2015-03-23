    #-------------------------------------------------
#
# Project created by QtCreator 2015-03-23T13:38:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Fractal
TEMPLATE = app


SOURCES += main.cpp\
    interface/mainwindow.cpp \
    component/component.cpp \
    component/composite.cpp \
    component/line.cpp

HEADERS  += interface/mainwindow.h \
    component/component.h \
    component/composite.h \
    component/line.h
