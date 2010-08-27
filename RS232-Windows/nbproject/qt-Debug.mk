#############################################################################
# Makefile for building: RS232-Windows
# Generated by qmake (2.01a) (Qt 4.6.3) on: vie 27. ago 00:43:20 2010
# Project:  nbproject/qt-Debug.pro
# Template: app
# Command: c:/Qt/2010.04/qt/bin/qmake.exe -win32 VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc.exe
CXX           = g++.exe
DEFINES       = -DUNICODE -DQT_LARGEFILE_SUPPORT -DQT_DLL -DQT_SQL_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_THREAD_SUPPORT -DQT_NEEDS_QMAIN
CFLAGS        = -g -Wall $(DEFINES)
CXXFLAGS      = -g -frtti -fexceptions -mthreads -Wall $(DEFINES)
INCPATH       = -I'../../../../Qt/2010.04/qt/include/QtCore' -I'../../../../Qt/2010.04/qt/include/QtNetwork' -I'../../../../Qt/2010.04/qt/include/QtGui' -I'../../../../Qt/2010.04/qt/include/QtSql' -I'../../../../Qt/2010.04/qt/include' -I'../../../../Qt/2010.04/qt/include/ActiveQt' -I'.' -I'.' -I'nbproject' -I'.' -I'../../../../Qt/2010.04/qt/mkspecs/default'
LINK        =        g++
LFLAGS        =        -enable-stdcall-fixup -Wl,-enable-auto-import -Wl,-enable-runtime-pseudo-reloc -mthreads -Wl -Wl,-subsystem,windows
LIBS        =        -L'c:/Qt/2010.04/qt/lib' -lmingw32 -lqtmaind build/Debug/MinGW-Windows/RS232-Windows_resource_res.o -lQtSqld4 -lQtGuid4 -lQtNetworkd4 -lQtCored4 
QMAKE         = c:/Qt/2010.04/qt/bin/qmake.exe
IDC           = c:/Qt/2010.04/qt/bin/idc.exe
IDL           = midl
ZIP           = zip -r -9
DEF_FILE      = 
RES_FILE      = build/Debug/MinGW-Windows/RS232-Windows_resource_res.o
COPY          = cp
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
DEL_FILE      = rm
DEL_DIR       = rmdir
MOVE          = mv
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir
INSTALL_FILE    = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR     = $(COPY_DIR)

####### Output directory

OBJECTS_DIR   = build/Debug/MinGW-Windows/

####### Files

SOURCES       = main.cpp \
		RS232_Conection.cpp \
		qextserialport_mod/win_qextserialport.cpp \
		qextserialport_mod/qextserialport.cpp \
		Adaptador.cpp \
		qextserialport_mod/qextserialbase.cpp \
		GUIAdaptador.cpp moc_GUIAdaptador.cpp \
		moc_Adaptador.cpp
OBJECTS       = build/Debug/MinGW-Windows/main.o \
		build/Debug/MinGW-Windows/RS232_Conection.o \
		build/Debug/MinGW-Windows/win_qextserialport.o \
		build/Debug/MinGW-Windows/qextserialport.o \
		build/Debug/MinGW-Windows/Adaptador.o \
		build/Debug/MinGW-Windows/qextserialbase.o \
		build/Debug/MinGW-Windows/GUIAdaptador.o \
		build/Debug/MinGW-Windows/moc_GUIAdaptador.o \
		build/Debug/MinGW-Windows/moc_Adaptador.o
DIST          = 
QMAKE_TARGET  = RS232-Windows
DESTDIR        = dist/Debug/MinGW-Windows/ #avoid trailing-slash linebreak
TARGET         = RS232-Windows.exe
DESTDIR_TARGET = dist/Debug/MinGW-Windows/RS232-Windows.exe

####### Implicit rules

.SUFFIXES: .cpp .cc .cxx .c

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o $@ $<

####### Build rules

first: all
all: qttmp-Debug.mk  $(DESTDIR_TARGET)

$(DESTDIR_TARGET): ui_GUIAdaptador.h $(OBJECTS) build/Debug/MinGW-Windows/RS232-Windows_resource_res.o
	$(LINK) $(LFLAGS) -o $(DESTDIR_TARGET) $(OBJECTS)  $(LIBS)


build/Debug/MinGW-Windows/RS232-Windows_resource_res.o: RS232-Windows_resource.rc
	windres -i RS232-Windows_resource.rc -o build/Debug/MinGW-Windows/RS232-Windows_resource_res.o --include-dir=.

qttmp-Debug.mk: nbproject/qt-Debug.pro  ../../../../Qt/2010.04/qt/mkspecs/qconfig.pri \
		../../../../Qt/2010.04/qt/mkspecs/features/qt_functions.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/qt_config.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/exclusive_builds.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/default_pre.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/win32/default_pre.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/debug.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/default_post.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/win32/default_post.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/win32/rtti.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/win32/exceptions.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/win32/stl.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/shared.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/warn_on.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/qt.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/win32/thread.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/moc.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/win32/windows.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/resources.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/uic.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/yacc.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/lex.prf \
		../../../../Qt/2010.04/qt/mkspecs/features/include_source_dir.prf \
		c:/Qt/2010.04/qt/lib/qtmaind.prl
	$(QMAKE) -win32 VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
../../../../Qt/2010.04/qt/mkspecs/qconfig.pri:
../../../../Qt/2010.04/qt/mkspecs/features/qt_functions.prf:
../../../../Qt/2010.04/qt/mkspecs/features/qt_config.prf:
../../../../Qt/2010.04/qt/mkspecs/features/exclusive_builds.prf:
../../../../Qt/2010.04/qt/mkspecs/features/default_pre.prf:
../../../../Qt/2010.04/qt/mkspecs/features/win32/default_pre.prf:
../../../../Qt/2010.04/qt/mkspecs/features/debug.prf:
../../../../Qt/2010.04/qt/mkspecs/features/default_post.prf:
../../../../Qt/2010.04/qt/mkspecs/features/win32/default_post.prf:
../../../../Qt/2010.04/qt/mkspecs/features/win32/rtti.prf:
../../../../Qt/2010.04/qt/mkspecs/features/win32/exceptions.prf:
../../../../Qt/2010.04/qt/mkspecs/features/win32/stl.prf:
../../../../Qt/2010.04/qt/mkspecs/features/shared.prf:
../../../../Qt/2010.04/qt/mkspecs/features/warn_on.prf:
../../../../Qt/2010.04/qt/mkspecs/features/qt.prf:
../../../../Qt/2010.04/qt/mkspecs/features/win32/thread.prf:
../../../../Qt/2010.04/qt/mkspecs/features/moc.prf:
../../../../Qt/2010.04/qt/mkspecs/features/win32/windows.prf:
../../../../Qt/2010.04/qt/mkspecs/features/resources.prf:
../../../../Qt/2010.04/qt/mkspecs/features/uic.prf:
../../../../Qt/2010.04/qt/mkspecs/features/yacc.prf:
../../../../Qt/2010.04/qt/mkspecs/features/lex.prf:
../../../../Qt/2010.04/qt/mkspecs/features/include_source_dir.prf:
c:/Qt/2010.04/qt/lib/qtmaind.prl:
qmake:  FORCE
	@$(QMAKE) -win32 VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro

dist:
	$(ZIP) RS232-Windows.zip $(SOURCES) $(DIST) nbproject/nbproject/qt-Debug.pro ../../../../Qt/2010.04/qt/mkspecs/qconfig.pri ../../../../Qt/2010.04/qt/mkspecs/features/qt_functions.prf ../../../../Qt/2010.04/qt/mkspecs/features/qt_config.prf ../../../../Qt/2010.04/qt/mkspecs/features/exclusive_builds.prf ../../../../Qt/2010.04/qt/mkspecs/features/default_pre.prf ../../../../Qt/2010.04/qt/mkspecs/features/win32/default_pre.prf ../../../../Qt/2010.04/qt/mkspecs/features/debug.prf ../../../../Qt/2010.04/qt/mkspecs/features/default_post.prf ../../../../Qt/2010.04/qt/mkspecs/features/win32/default_post.prf ../../../../Qt/2010.04/qt/mkspecs/features/win32/rtti.prf ../../../../Qt/2010.04/qt/mkspecs/features/win32/exceptions.prf ../../../../Qt/2010.04/qt/mkspecs/features/win32/stl.prf ../../../../Qt/2010.04/qt/mkspecs/features/shared.prf ../../../../Qt/2010.04/qt/mkspecs/features/warn_on.prf ../../../../Qt/2010.04/qt/mkspecs/features/qt.prf ../../../../Qt/2010.04/qt/mkspecs/features/win32/thread.prf ../../../../Qt/2010.04/qt/mkspecs/features/moc.prf ../../../../Qt/2010.04/qt/mkspecs/features/win32/windows.prf ../../../../Qt/2010.04/qt/mkspecs/features/resources.prf ../../../../Qt/2010.04/qt/mkspecs/features/uic.prf ../../../../Qt/2010.04/qt/mkspecs/features/yacc.prf ../../../../Qt/2010.04/qt/mkspecs/features/lex.prf ../../../../Qt/2010.04/qt/mkspecs/features/include_source_dir.prf c:/Qt/2010.04/qt/lib/qtmaind.prl Adaptador_pt.ts Adaptador_en.ts Adaptador_pt.ts Adaptador_en.ts HEADERS RESOURCES IMAGES SOURCES OBJECTIVE_SOURCES FORMS YACCSOURCES YACCSOURCES LEXSOURCES 

clean: compiler_clean 
	-$(DEL_FILE) build/Debug/MinGW-Windows/main.o build/Debug/MinGW-Windows/RS232_Conection.o build/Debug/MinGW-Windows/win_qextserialport.o build/Debug/MinGW-Windows/qextserialport.o build/Debug/MinGW-Windows/Adaptador.o build/Debug/MinGW-Windows/qextserialbase.o build/Debug/MinGW-Windows/GUIAdaptador.o build/Debug/MinGW-Windows/moc_GUIAdaptador.o build/Debug/MinGW-Windows/moc_Adaptador.o
	-$(DEL_FILE) build/Debug/MinGW-Windows/RS232-Windows_resource_res.o

distclean: clean
	-$(DEL_FILE) $(DESTDIR_TARGET)
	-$(DEL_FILE) qttmp-Debug.mk

check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_GUIAdaptador.cpp moc_Adaptador.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_GUIAdaptador.cpp moc_Adaptador.cpp
moc_GUIAdaptador.cpp: ui_GUIAdaptador.h \
		Adaptador.h \
		RS232_Conection.h \
		qextserialport_mod/qextserialport.h \
		qextserialport_mod/win_qextserialport.h \
		qextserialport_mod/qextserialbase.h \
		GUIAdaptador.h
	C:/Qt/2010.04/qt/bin/moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 GUIAdaptador.h -o moc_GUIAdaptador.cpp

moc_Adaptador.cpp: RS232_Conection.h \
		qextserialport_mod/qextserialport.h \
		qextserialport_mod/win_qextserialport.h \
		qextserialport_mod/qextserialbase.h \
		Adaptador.h
	C:/Qt/2010.04/qt/bin/moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 Adaptador.h -o moc_Adaptador.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_GUIAdaptador.h
compiler_uic_clean:
	-$(DEL_FILE) ui_GUIAdaptador.h
ui_GUIAdaptador.h: GUIAdaptador.ui
	c:/Qt/2010.04/qt/bin/uic.exe GUIAdaptador.ui -o ui_GUIAdaptador.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 



####### Compile

build/Debug/MinGW-Windows/main.o: main.cpp GUIAdaptador.h \
		ui_GUIAdaptador.h \
		Adaptador.h \
		RS232_Conection.h \
		qextserialport_mod/qextserialport.h \
		qextserialport_mod/win_qextserialport.h \
		qextserialport_mod/qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW-Windows/main.o main.cpp

build/Debug/MinGW-Windows/RS232_Conection.o: RS232_Conection.cpp RS232_Conection.h \
		qextserialport_mod/qextserialport.h \
		qextserialport_mod/win_qextserialport.h \
		qextserialport_mod/qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW-Windows/RS232_Conection.o RS232_Conection.cpp

build/Debug/MinGW-Windows/win_qextserialport.o: qextserialport_mod/win_qextserialport.cpp qextserialport_mod/win_qextserialport.h \
		qextserialport_mod/qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW-Windows/win_qextserialport.o qextserialport_mod/win_qextserialport.cpp

build/Debug/MinGW-Windows/qextserialport.o: qextserialport_mod/qextserialport.cpp qextserialport_mod/qextserialport.h \
		qextserialport_mod/win_qextserialport.h \
		qextserialport_mod/qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW-Windows/qextserialport.o qextserialport_mod/qextserialport.cpp

build/Debug/MinGW-Windows/Adaptador.o: Adaptador.cpp Adaptador.h \
		RS232_Conection.h \
		qextserialport_mod/qextserialport.h \
		qextserialport_mod/win_qextserialport.h \
		qextserialport_mod/qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW-Windows/Adaptador.o Adaptador.cpp

build/Debug/MinGW-Windows/qextserialbase.o: qextserialport_mod/qextserialbase.cpp qextserialport_mod/qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW-Windows/qextserialbase.o qextserialport_mod/qextserialbase.cpp

build/Debug/MinGW-Windows/GUIAdaptador.o: GUIAdaptador.cpp GUIAdaptador.h \
		ui_GUIAdaptador.h \
		Adaptador.h \
		RS232_Conection.h \
		qextserialport_mod/qextserialport.h \
		qextserialport_mod/win_qextserialport.h \
		qextserialport_mod/qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW-Windows/GUIAdaptador.o GUIAdaptador.cpp

build/Debug/MinGW-Windows/moc_GUIAdaptador.o: moc_GUIAdaptador.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW-Windows/moc_GUIAdaptador.o moc_GUIAdaptador.cpp

build/Debug/MinGW-Windows/moc_Adaptador.o: moc_Adaptador.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/MinGW-Windows/moc_Adaptador.o moc_Adaptador.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

