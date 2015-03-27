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
    interface/qcentralwidget.cpp \
    interface/qdessinwidget.cpp \
    interface/qparametrewidget.cpp \
    component/component.cpp \
    component/composite.cpp \
    component/line.cpp \
    interface/test.cpp \
    interface/qprogresswiget.cpp \
    algorithme/fractal.cpp

HEADERS  += interface/mainwindow.h \
    interface/qcentralwidget.h \
    interface/qdessinwidget.h \
    interface/qparametrewidget.h \
    component/component.h \
    component/composite.h \
    component/line.h \
    interface/test.h \
    interface/qprogresswiget.h \
    algorithme/fractal.h
