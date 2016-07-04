TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += C++11

SOURCES += main.cpp \
    character.cpp \
    orc.cpp \
    pegasus.cpp \
    harpy.cpp \
    elf.cpp \
    flybehaviour.cpp \
    dontflybehaviour.cpp \
    flymagicbehaviour.cpp \
    walkbehaviour.cpp \
    simplewalkbehaviour.cpp \
    dontwalkbehaviour.cpp \
    flywingsbehaviour.cpp

HEADERS += \
    character.h \
    orc.h \
    pegasus.h \
    harpy.h \
    elf.h \
    flybehaviour.h \
    dontflybehaviour.h \
    flymagicbehaviour.h \
    walkbehaviour.h \
    simplewalkbehaviour.h \
    dontwalkbehaviour.h \
    flywingsbehaviour.h

