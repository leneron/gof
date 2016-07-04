TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += C++11

SOURCES += main.cpp \
    operand.cpp \
    compositionoperand.cpp \
    numberoperand.cpp \
    calculator.cpp

HEADERS += \
    operand.h \
    numberoperand.h \
    compositionoperand.h \
    calculator.h

