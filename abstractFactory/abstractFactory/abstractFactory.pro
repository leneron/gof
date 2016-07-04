TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    distribution.cpp \
    movie.cpp \
    languagefactory.cpp \
    englanguagefactory.cpp \
    rulanguagefactory.cpp \
    subtitles.cpp \
    sound.cpp \
    rusubtitles.cpp \
    engsubtitles.cpp \
    rusound.cpp \
    engsound.cpp

HEADERS += \
    distribution.h \
    movie.h \
    languagefactory.h \
    englanguagefactory.h \
    rulanguagefactory.h \
    subtitles.h \
    sound.h \
    rusubtitles.h \
    engsubtitles.h \
    rusound.h \
    engsound.h


