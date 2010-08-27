# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/MinGW-Windows
TARGET = miniPBX-Windows
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
QT = core gui
SOURCES += MiniPBX.cpp main.cpp RS232_Conection.cpp qextserialport_mod/win_qextserialport.cpp qextserialport_mod/qextserialport.cpp HiloLecturaArchivo.cpp GUIMiniPBX.cpp qextserialport_mod/qextserialbase.cpp
HEADERS += ui_GUIMiniPBX.h qextserialport_mod/qextserialbase.h qextserialport_mod/qextserialport.h GUIMiniPBX.h RS232_Conection.h MiniPBX.h qextserialport_mod/win_qextserialport.h HiloLecturaArchivo.h
FORMS += GUIMiniPBX.ui
RESOURCES +=
TRANSLATIONS += miniPBX_en.ts miniPBX_pt.ts
OBJECTS_DIR = build/Release/MinGW-Windows
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc.exe
QMAKE_CXX = g++.exe
DEFINES += 
INCLUDEPATH += 
LIBS += 
