TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = Desktop
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
QT = core gui network sql
SOURCES += GUIDesktop.cpp MysqlConection.cpp Desktop.cpp Llamada.cpp main.cpp
HEADERS += MysqlConection.h Llamada.h Desktop.h GUIDesktop.h
FORMS += GUIDesktop.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux-x86
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
