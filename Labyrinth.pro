TEMPLATE = app
TARGET = Labyrinth

QT = core
QT += widgets
QT += quickcontrols2
QT += gui

CONFIG += qt
CONFIG += c++17 cmdline
CONFIG += fullscreen
CONFIG += lrelease
CONFIG += embed_translations
CONFIG += debugger

HEADERS += startPage.h


SOURCES += \
        main.cpp \
        startPage.cpp

TRANSLATIONS += \
    Labyrinth_en_US.ts

!isEmpty(target.path): INSTALLS += target
