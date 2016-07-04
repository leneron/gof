TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += C++11

SOURCES += main.cpp \
    caretaker.cpp \
    memento.cpp \
    game.cpp \
    board.cpp

HEADERS += \
    caretaker.h \
    memento.h \
    game.h \
    board.h

