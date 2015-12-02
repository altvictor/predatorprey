TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    creature.cpp \
    predator.cpp \
    prey.cpp \
    grid.cpp

HEADERS += \
    creature.h \
    predator.h \
    prey.h \
    grid.h

