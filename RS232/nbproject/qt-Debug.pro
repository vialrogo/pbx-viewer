TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = RS232
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
QT = core gui network
SOURCES += Adaptador.cpp GUIAdaptador.cpp qextserialport_mod/posix_qextserialport.cpp qextserialport_mod/qextserialport.cpp RS232_Conection.cpp main.cpp qextserialport_mod/qextserialbase.cpp
HEADERS += qextserialport_mod/qextserialport.h Adaptador.h qextserialport_mod/posix_qextserialport.h RS232_Conection.h qextserialport_mod/qextserialbase.h GUIAdaptador.h
FORMS += GUIAdaptador.ui
RESOURCES +=
TRANSLATIONS += Adaptador_en.ts Adaptador_pt.ts
OBJECTS_DIR = build/Debug/GNU-Linux-x86
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
