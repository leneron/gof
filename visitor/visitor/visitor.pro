TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    hotel.cpp \
    room.cpp \
    deluxeroom.cpp \
    standartroom.cpp \
    guest.cpp \
    businessman.cpp \
    tourist.cpp

HEADERS += \
    hotel.h \
    room.h \
    deluxeroom.h \
    standartroom.h \
    guest.h \
    businessman.h \
    tourist.h
