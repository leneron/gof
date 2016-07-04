TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += C++11

SOURCES += main.cpp \
    office.cpp \
    subscriber.cpp \
    magazinesubscriber.cpp \
    papersubscriber.cpp

HEADERS += \
    office.h \
    subscriber.h \
    magazinesubscriber.h \
    papersubscriber.h

