TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += C++11

SOURCES += main.cpp \
    payment.cpp \
    simplepayment.cpp \
    statepayment.cpp \
    preferencialpayment.cpp \
    innerbankpayment.cpp \
    handler.cpp \
    registerhandler.cpp \
    controlhandler.cpp \
    finishhandler.cpp \
    feehandler.cpp

HEADERS += \
    payment.h \
    simplepayment.h \
    statepayment.h \
    preferencialpayment.h \
    innerbankpayment.h \
    handler.h \
    registerhandler.h \
    controlhandler.h \
    finishhandler.h \
    feehandler.h
