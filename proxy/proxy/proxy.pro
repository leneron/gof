TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    customer.cpp \
    seller.cpp \
    owner.cpp \
    realtor.cpp

HEADERS += \
    customer.h \
    seller.h \
    owner.h \
    realtor.h
