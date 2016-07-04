TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    grantorganization.cpp \
    grant.cpp \
    participant.cpp \
    state.cpp \
    createdstate.cpp \
    revokedstate.cpp \
    pendingstate.cpp \
    confirmedstate.cpp \
    rejectedstate.cpp \
    delayedstate.cpp

HEADERS += \
    grantorganization.h \
    grant.h \
    participant.h \
    state.h \
    createdstate.h \
    revokedstate.h \
    pendingstate.h \
    delayedstate.h \
    confirmedstate.h \
    rejectedstate.h

