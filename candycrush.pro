#-------------------------------------------------
#
# Project created by QtCreator 2015-06-26T21:26:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = candycrush
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    score.cpp \
    win.cpp \
    win2.cpp \
    win1.cpp \
    lose.cpp

HEADERS  += mainwindow.h \
    score.h \
    win.h \
    win2.h \
    win1.h \
    lose.h

FORMS    += mainwindow.ui \
    win.ui \
    win2.ui \
    win1.ui \
    lose.ui

RESOURCES += \
    pic.qrc

DISTFILES += \
    ../../Desktop/candycrush/blue.jpg
