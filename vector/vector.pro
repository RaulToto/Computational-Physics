QT += core
QT -= gui

CONFIG += c++11

TARGET = vector
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    vector.cpp

HEADERS += \
    vector.h
