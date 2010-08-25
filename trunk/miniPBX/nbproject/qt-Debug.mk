#############################################################################
# Makefile for building: dist/Debug/GNU-Linux-x86/miniPBX
# Generated by qmake (2.01a) (Qt 4.6.3) on: ter ago 24 21:00:59 2010
# Project:  nbproject/qt-Debug.pro
# Template: app
# Command: /usr/bin/qmake -unix VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt/mkspecs/linux-g++-64 -Inbproject -I/usr/include/QtCore -I/usr/include/QtGui -I/usr/include -I. -I. -Inbproject -I.
LINK          = g++
LFLAGS        = -m64 -Wl,--hash-style=gnu -Wl,--as-needed
LIBS          = $(SUBLIBS)  -L/usr/lib -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = build/Debug/GNU-Linux-x86/

####### Files

SOURCES       = MiniPBX.cpp \
		qextserialport_mod/posix_qextserialport.cpp \
		main.cpp \
		RS232_Conection.cpp \
		qextserialport_mod/qextserialport.cpp \
		HiloLecturaArchivo.cpp \
		GUIMiniPBX.cpp \
		qextserialport_mod/qextserialbase.cpp moc_GUIMiniPBX.cpp \
		moc_MiniPBX.cpp \
		moc_HiloLecturaArchivo.cpp
OBJECTS       = build/Debug/GNU-Linux-x86/MiniPBX.o \
		build/Debug/GNU-Linux-x86/posix_qextserialport.o \
		build/Debug/GNU-Linux-x86/main.o \
		build/Debug/GNU-Linux-x86/RS232_Conection.o \
		build/Debug/GNU-Linux-x86/qextserialport.o \
		build/Debug/GNU-Linux-x86/HiloLecturaArchivo.o \
		build/Debug/GNU-Linux-x86/GUIMiniPBX.o \
		build/Debug/GNU-Linux-x86/qextserialbase.o \
		build/Debug/GNU-Linux-x86/moc_GUIMiniPBX.o \
		build/Debug/GNU-Linux-x86/moc_MiniPBX.o \
		build/Debug/GNU-Linux-x86/moc_HiloLecturaArchivo.o
DIST          = /usr/share/qt/mkspecs/common/g++.conf \
		/usr/share/qt/mkspecs/common/unix.conf \
		/usr/share/qt/mkspecs/common/linux.conf \
		/usr/share/qt/mkspecs/qconfig.pri \
		/usr/share/qt/mkspecs/features/qt_functions.prf \
		/usr/share/qt/mkspecs/features/qt_config.prf \
		/usr/share/qt/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt/mkspecs/features/default_pre.prf \
		/usr/share/qt/mkspecs/features/debug.prf \
		/usr/share/qt/mkspecs/features/default_post.prf \
		/usr/share/qt/mkspecs/features/warn_on.prf \
		/usr/share/qt/mkspecs/features/qt.prf \
		/usr/share/qt/mkspecs/features/unix/thread.prf \
		/usr/share/qt/mkspecs/features/moc.prf \
		/usr/share/qt/mkspecs/features/resources.prf \
		/usr/share/qt/mkspecs/features/uic.prf \
		/usr/share/qt/mkspecs/features/yacc.prf \
		/usr/share/qt/mkspecs/features/lex.prf \
		/usr/share/qt/mkspecs/features/include_source_dir.prf \
		nbproject/qt-Debug.pro
QMAKE_TARGET  = miniPBX
DESTDIR       = dist/Debug/GNU-Linux-x86/
TARGET        = dist/Debug/GNU-Linux-x86/miniPBX

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: qttmp-Debug.mk $(TARGET)

$(TARGET): ui_GUIMiniPBX.h $(OBJECTS)  
	@$(CHK_DIR_EXISTS) dist/Debug/GNU-Linux-x86/ || $(MKDIR) dist/Debug/GNU-Linux-x86/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

qttmp-Debug.mk: nbproject/qt-Debug.pro  /usr/share/qt/mkspecs/linux-g++-64/qmake.conf /usr/share/qt/mkspecs/common/g++.conf \
		/usr/share/qt/mkspecs/common/unix.conf \
		/usr/share/qt/mkspecs/common/linux.conf \
		/usr/share/qt/mkspecs/qconfig.pri \
		/usr/share/qt/mkspecs/features/qt_functions.prf \
		/usr/share/qt/mkspecs/features/qt_config.prf \
		/usr/share/qt/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt/mkspecs/features/default_pre.prf \
		/usr/share/qt/mkspecs/features/debug.prf \
		/usr/share/qt/mkspecs/features/default_post.prf \
		/usr/share/qt/mkspecs/features/warn_on.prf \
		/usr/share/qt/mkspecs/features/qt.prf \
		/usr/share/qt/mkspecs/features/unix/thread.prf \
		/usr/share/qt/mkspecs/features/moc.prf \
		/usr/share/qt/mkspecs/features/resources.prf \
		/usr/share/qt/mkspecs/features/uic.prf \
		/usr/share/qt/mkspecs/features/yacc.prf \
		/usr/share/qt/mkspecs/features/lex.prf \
		/usr/share/qt/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -unix VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
/usr/share/qt/mkspecs/common/g++.conf:
/usr/share/qt/mkspecs/common/unix.conf:
/usr/share/qt/mkspecs/common/linux.conf:
/usr/share/qt/mkspecs/qconfig.pri:
/usr/share/qt/mkspecs/features/qt_functions.prf:
/usr/share/qt/mkspecs/features/qt_config.prf:
/usr/share/qt/mkspecs/features/exclusive_builds.prf:
/usr/share/qt/mkspecs/features/default_pre.prf:
/usr/share/qt/mkspecs/features/debug.prf:
/usr/share/qt/mkspecs/features/default_post.prf:
/usr/share/qt/mkspecs/features/warn_on.prf:
/usr/share/qt/mkspecs/features/qt.prf:
/usr/share/qt/mkspecs/features/unix/thread.prf:
/usr/share/qt/mkspecs/features/moc.prf:
/usr/share/qt/mkspecs/features/resources.prf:
/usr/share/qt/mkspecs/features/uic.prf:
/usr/share/qt/mkspecs/features/yacc.prf:
/usr/share/qt/mkspecs/features/lex.prf:
/usr/share/qt/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -unix VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro

dist: 
	@$(CHK_DIR_EXISTS) nbproject/build/Debug/GNU-Linux-x86/miniPBX1.0.0 || $(MKDIR) nbproject/build/Debug/GNU-Linux-x86/miniPBX1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) nbproject/build/Debug/GNU-Linux-x86/miniPBX1.0.0/ && $(COPY_FILE) --parents ui_GUIMiniPBX.h qextserialport_mod/qextserialbase.h GUIMiniPBX.h qextserialport_mod/qextserialport.h RS232_Conection.h qextserialport_mod/posix_qextserialport.h MiniPBX.h HiloLecturaArchivo.h nbproject/build/Debug/GNU-Linux-x86/miniPBX1.0.0/ && $(COPY_FILE) --parents MiniPBX.cpp qextserialport_mod/posix_qextserialport.cpp main.cpp RS232_Conection.cpp qextserialport_mod/qextserialport.cpp HiloLecturaArchivo.cpp GUIMiniPBX.cpp qextserialport_mod/qextserialbase.cpp nbproject/build/Debug/GNU-Linux-x86/miniPBX1.0.0/ && $(COPY_FILE) --parents GUIMiniPBX.ui nbproject/build/Debug/GNU-Linux-x86/miniPBX1.0.0/ && (cd `dirname nbproject/build/Debug/GNU-Linux-x86/miniPBX1.0.0` && $(TAR) miniPBX1.0.0.tar miniPBX1.0.0 && $(COMPRESS) miniPBX1.0.0.tar) && $(MOVE) `dirname nbproject/build/Debug/GNU-Linux-x86/miniPBX1.0.0`/miniPBX1.0.0.tar.gz . && $(DEL_FILE) -r nbproject/build/Debug/GNU-Linux-x86/miniPBX1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) qttmp-Debug.mk


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_GUIMiniPBX.cpp moc_MiniPBX.cpp moc_HiloLecturaArchivo.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_GUIMiniPBX.cpp moc_MiniPBX.cpp moc_HiloLecturaArchivo.cpp
moc_GUIMiniPBX.cpp: ui_GUIMiniPBX.h \
		MiniPBX.h \
		HiloLecturaArchivo.h \
		RS232_Conection.h \
		qextserialport_mod/qextserialport.h \
		qextserialport_mod/posix_qextserialport.h \
		qextserialport_mod/qextserialbase.h \
		GUIMiniPBX.h
	/usr/bin/moc $(DEFINES) $(INCPATH) GUIMiniPBX.h -o moc_GUIMiniPBX.cpp

moc_MiniPBX.cpp: HiloLecturaArchivo.h \
		RS232_Conection.h \
		qextserialport_mod/qextserialport.h \
		qextserialport_mod/posix_qextserialport.h \
		qextserialport_mod/qextserialbase.h \
		MiniPBX.h
	/usr/bin/moc $(DEFINES) $(INCPATH) MiniPBX.h -o moc_MiniPBX.cpp

moc_HiloLecturaArchivo.cpp: RS232_Conection.h \
		qextserialport_mod/qextserialport.h \
		qextserialport_mod/posix_qextserialport.h \
		qextserialport_mod/qextserialbase.h \
		HiloLecturaArchivo.h
	/usr/bin/moc $(DEFINES) $(INCPATH) HiloLecturaArchivo.h -o moc_HiloLecturaArchivo.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_GUIMiniPBX.h
compiler_uic_clean:
	-$(DEL_FILE) ui_GUIMiniPBX.h
ui_GUIMiniPBX.h: GUIMiniPBX.ui
	/usr/bin/uic GUIMiniPBX.ui -o ui_GUIMiniPBX.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

build/Debug/GNU-Linux-x86/MiniPBX.o: MiniPBX.cpp MiniPBX.h \
		HiloLecturaArchivo.h \
		RS232_Conection.h \
		qextserialport_mod/qextserialport.h \
		qextserialport_mod/posix_qextserialport.h \
		qextserialport_mod/qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/MiniPBX.o MiniPBX.cpp

build/Debug/GNU-Linux-x86/posix_qextserialport.o: qextserialport_mod/posix_qextserialport.cpp qextserialport_mod/posix_qextserialport.h \
		qextserialport_mod/qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/posix_qextserialport.o qextserialport_mod/posix_qextserialport.cpp

build/Debug/GNU-Linux-x86/main.o: main.cpp RS232_Conection.h \
		qextserialport_mod/qextserialport.h \
		qextserialport_mod/posix_qextserialport.h \
		qextserialport_mod/qextserialbase.h \
		GUIMiniPBX.h \
		ui_GUIMiniPBX.h \
		MiniPBX.h \
		HiloLecturaArchivo.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/main.o main.cpp

build/Debug/GNU-Linux-x86/RS232_Conection.o: RS232_Conection.cpp RS232_Conection.h \
		qextserialport_mod/qextserialport.h \
		qextserialport_mod/posix_qextserialport.h \
		qextserialport_mod/qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/RS232_Conection.o RS232_Conection.cpp

build/Debug/GNU-Linux-x86/qextserialport.o: qextserialport_mod/qextserialport.cpp qextserialport_mod/qextserialport.h \
		qextserialport_mod/posix_qextserialport.h \
		qextserialport_mod/qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/qextserialport.o qextserialport_mod/qextserialport.cpp

build/Debug/GNU-Linux-x86/HiloLecturaArchivo.o: HiloLecturaArchivo.cpp HiloLecturaArchivo.h \
		RS232_Conection.h \
		qextserialport_mod/qextserialport.h \
		qextserialport_mod/posix_qextserialport.h \
		qextserialport_mod/qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/HiloLecturaArchivo.o HiloLecturaArchivo.cpp

build/Debug/GNU-Linux-x86/GUIMiniPBX.o: GUIMiniPBX.cpp GUIMiniPBX.h \
		ui_GUIMiniPBX.h \
		MiniPBX.h \
		HiloLecturaArchivo.h \
		RS232_Conection.h \
		qextserialport_mod/qextserialport.h \
		qextserialport_mod/posix_qextserialport.h \
		qextserialport_mod/qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/GUIMiniPBX.o GUIMiniPBX.cpp

build/Debug/GNU-Linux-x86/qextserialbase.o: qextserialport_mod/qextserialbase.cpp qextserialport_mod/qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/qextserialbase.o qextserialport_mod/qextserialbase.cpp

build/Debug/GNU-Linux-x86/moc_GUIMiniPBX.o: moc_GUIMiniPBX.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_GUIMiniPBX.o moc_GUIMiniPBX.cpp

build/Debug/GNU-Linux-x86/moc_MiniPBX.o: moc_MiniPBX.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_MiniPBX.o moc_MiniPBX.cpp

build/Debug/GNU-Linux-x86/moc_HiloLecturaArchivo.o: moc_HiloLecturaArchivo.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_HiloLecturaArchivo.o moc_HiloLecturaArchivo.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

