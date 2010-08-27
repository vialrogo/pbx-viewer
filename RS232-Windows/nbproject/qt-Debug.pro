# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/MinGW-Windows
TARGET = RS232-Windows
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
QT = core gui network sql
SOURCES += main.cpp RS232_Conection.cpp qextserialport_mod/win_qextserialport.cpp qextserialport_mod/qextserialport.cpp Adaptador.cpp qextserialport_mod/qextserialbase.cpp GUIAdaptador.cpp
HEADERS += GUIAdaptador.h qextserialport_mod/qextserialbase.h qextserialport_mod/qextserialport.h RS232_Conection.h Adaptador.h ui_GUIAdaptador.h qextserialport_mod/win_qextserialport.h
FORMS += GUIAdaptador.ui
RESOURCES +=
TRANSLATIONS += Adaptador_pt.ts Adaptador_en.ts
OBJECTS_DIR = build/Debug/MinGW-Windows
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc.exe
QMAKE_CXX = g++.exe
DEFINES += 
INCLUDEPATH += 
LIBS += 
