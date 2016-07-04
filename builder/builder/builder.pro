TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    reader.cpp \
    document.cpp \
    builder.cpp \
    xmlbuilder.cpp \
    txtbuilder.cpp

HEADERS += \
    reader.h \
    document.h \
    builder.h \
    xmlbuilder.h \
    txtbuilder.h

