# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/MinGW-Windows
TARGET = Desktop-Windows
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
QT = core gui
SOURCES += main.cpp MysqlConection.cpp GUIDesktop.cpp Llamada.cpp CRUD_PBX.cpp Desktop.cpp
HEADERS += Llamada.h ui_GUIDesktop.h GUIDesktop.h CRUD_PBX.h Desktop.h ui_CRUD_PBX.h MysqlConection.h
FORMS += GUIDesktop.ui CRUD_PBX.ui
RESOURCES +=
TRANSLATIONS += Desktop_en.ts Desktop_pt.ts
OBJECTS_DIR = build/Release/MinGW-Windows
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc.exe
QMAKE_CXX = g++.exe
DEFINES += 
INCLUDEPATH += 
LIBS += 
