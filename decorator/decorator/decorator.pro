TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    baserobot.cpp \
    robotdecorator.cpp \
    wheel.cpp \
    boosterengine.cpp \
    detail.cpp

HEADERS += \
    baserobot.h \
    robotdecorator.h \
    wheel.h \
    boosterengine.h \
    detail.h

