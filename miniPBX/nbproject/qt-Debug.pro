# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = miniPBX
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
QT = core gui
SOURCES += MiniPBX.cpp qextserialport_mod/posix_qextserialport.cpp main.cpp RS232_Conection.cpp qextserialport_mod/qextserialport.cpp HiloLecturaArchivo.cpp GUIMiniPBX.cpp qextserialport_mod/qextserialbase.cpp
HEADERS += ui_GUIMiniPBX.h qextserialport_mod/qextserialbase.h GUIMiniPBX.h qextserialport_mod/qextserialport.h RS232_Conection.h qextserialport_mod/posix_qextserialport.h MiniPBX.h HiloLecturaArchivo.h
FORMS += GUIMiniPBX.ui
RESOURCES +=
TRANSLATIONS += miniPBX_en.ts miniPBX_pt.ts
OBJECTS_DIR = build/Debug/GNU-Linux-x86
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
