QT += core network
QT -= gui

CONFIG += c++11

TARGET = parsian-console
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    packet.cpp \
    client.cpp

HEADERS += \
    packet.h \
    client.h
