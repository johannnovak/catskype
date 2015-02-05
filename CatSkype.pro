#-------------------------------------------------
#
# Project created by QtCreator 2015-01-30T21:38:19
#
#-------------------------------------------------

QT       += core gui dbus network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CatSkype
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    skypeinterface.cpp \
    skypewindow.cpp \
    user.cpp \
    chattab.cpp \
    chatmessage.cpp \
    chat.cpp \
    settings.cpp \
    chatlistitem.cpp

HEADERS  += mainwindow.h \
    skypeinterface.h \
    skypewindow.h \
    friendlist.h \
    user.h \
    chattab.h \
    chatmessage.h \
    chat.h \
    textdocumentimproved.h \
    settings.h \
    chatlistitem.h

FORMS    += mainwindow.ui \
    settings.ui \
    skypewindow.ui

OTHER_FILES += \
    ideas.txt

RESOURCES += \
    res.qrc


