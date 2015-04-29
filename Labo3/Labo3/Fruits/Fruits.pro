#-------------------------------------------------
#
# Project created by QtCreator 2015-04-17T18:27:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Fruits
TEMPLATE = app


SOURCES += main.cpp\
        composit/component.cpp\
        composit/fruit.cpp\
        composit/fruitbag.cpp\
    commande/commande.cpp \
    commande/commandestate.cpp \
    commande/waiting.cpp \
    commande/paied.cpp \
    commande/send.cpp \
    decorator/decorator.cpp \
    decorator/decoratioetoile.cpp \
    decorator/decoratiosharp.cpp \
    decorator/decorationequals.cpp

HEADERS  += composit/component.h\
        composit/fruit.h\
        composit/fruitbag.h\
    commande/commande.h \
    commande/commandestate.h \
    commande/waiting.h \
    commande/paied.h \
    commande/send.h \
    decorator/decorator.h \
    decorator/decoratioetoile.h \
    decorator/decoratiosharp.h\
    decorator/decorationequals.h
