TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += C++11

SOURCES += main.cpp \
    logger.cpp \
    loggerdestroyer.cpp

HEADERS += \
    logger.h \
    loggerdestroyer.h \
    log.h
