TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    habitat.cpp \
    bacterialfactory.cpp \
    bacteria.cpp \
    grampositivebacteria.cpp \
    gramnegativebacteria.cpp

HEADERS += \
    habitat.h \
    bacterialfactory.h \
    bacteria.h \
    grampositivebacteria.h \
    gramnegativebacteria.h
