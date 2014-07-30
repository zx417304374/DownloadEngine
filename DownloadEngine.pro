#-------------------------------------------------
#
# Project created by QtCreator 2014-07-29T12:49:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DownloadEngine
TEMPLATE = app


SOURCES += main.cpp\
        MainDialog.cpp \
    IDownloadEngine.cpp \
    HttpDownloadEngine.cpp \
    DemoDownloadEngine.cpp

HEADERS  += MainDialog.h \
    IDownloadEngine.h \
    HttpDownloadEngine.h \
    DemoDownloadEngine.h

FORMS    += MainDialog.ui
