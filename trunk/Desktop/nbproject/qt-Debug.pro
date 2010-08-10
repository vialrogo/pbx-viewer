# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = Desktop
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
QT = core gui network sql
SOURCES += main.cpp MysqlConection.cpp GUIDesktop.cpp Llamada.cpp CRUD_PBX.cpp Desktop.cpp
HEADERS += Llamada.h GUIDesktop.h CRUD_PBX.h Desktop.h MysqlConection.h
FORMS += GUIDesktop.ui CRUD_PBX.ui
RESOURCES +=
TRANSLATIONS += Desktop_en.ts Desktop_pt.ts
OBJECTS_DIR = build/Debug/GNU-Linux-x86
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
