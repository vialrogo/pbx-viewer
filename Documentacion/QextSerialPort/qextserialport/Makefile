#############################################################################
# Makefile for building: libqextserialport.so.1.0.0
# Generated by qmake (2.01a) (Qt 4.6.2) on: mi� abr 14 13:04:45 2010
# Project:  qextserialport.pro
# Template: lib
# Command: /usr/bin/qmake -unix -o Makefile qextserialport.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -D_TTY_POSIX_ -DQT_NO_DEBUG -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -march=x86-64 -mtune=generic -O2 -pipe -D_REENTRANT -Wall -W -fPIC $(DEFINES)
CXXFLAGS      = -m64 -pipe -march=x86-64 -mtune=generic -O2 -pipe -D_REENTRANT -Wall -W -fPIC $(DEFINES)
INCPATH       = -I/usr/share/qt/mkspecs/linux-g++-64 -I. -I/usr/include/QtCore -I/usr/include -Ibuild/moc
LINK          = g++
LFLAGS        = -m64 -Wl,--hash-style=gnu -Wl,--as-needed -Wl,-O1 -shared -Wl,-soname,libqextserialport.so.1
LIBS          = $(SUBLIBS)  -L/usr/lib -lpthread -lQtCore 
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

OBJECTS_DIR   = build/obj/

####### Files

SOURCES       = qextserialbase.cpp \
		qextserialport.cpp \
		posix_qextserialport.cpp 
OBJECTS       = build/obj/qextserialbase.o \
		build/obj/qextserialport.o \
		build/obj/posix_qextserialport.o
DIST          = /usr/share/qt/mkspecs/common/g++.conf \
		/usr/share/qt/mkspecs/common/unix.conf \
		/usr/share/qt/mkspecs/common/linux.conf \
		/usr/share/qt/mkspecs/qconfig.pri \
		/usr/share/qt/mkspecs/features/qt_functions.prf \
		/usr/share/qt/mkspecs/features/qt_config.prf \
		/usr/share/qt/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt/mkspecs/features/default_pre.prf \
		/usr/share/qt/mkspecs/features/release.prf \
		/usr/share/qt/mkspecs/features/default_post.prf \
		/usr/share/qt/mkspecs/features/unix/thread.prf \
		/usr/share/qt/mkspecs/features/qt.prf \
		/usr/share/qt/mkspecs/features/moc.prf \
		/usr/share/qt/mkspecs/features/warn_on.prf \
		/usr/share/qt/mkspecs/features/resources.prf \
		/usr/share/qt/mkspecs/features/uic.prf \
		/usr/share/qt/mkspecs/features/yacc.prf \
		/usr/share/qt/mkspecs/features/lex.prf \
		/usr/share/qt/mkspecs/features/include_source_dir.prf \
		qextserialport.pro
QMAKE_TARGET  = qextserialport
DESTDIR       = build/
TARGET        = libqextserialport.so.1.0.0
TARGETA       = build/libqextserialport.a
TARGETD       = libqextserialport.so.1.0.0
TARGET0       = libqextserialport.so
TARGET1       = libqextserialport.so.1
TARGET2       = libqextserialport.so.1.0

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

all: Makefile  build/$(TARGET)

build/$(TARGET):  $(OBJECTS) $(SUBLIBS) $(OBJCOMP)  
	@$(CHK_DIR_EXISTS) build/ || $(MKDIR) build/ 
	-$(DEL_FILE) $(TARGET) $(TARGET0) $(TARGET1) $(TARGET2)
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(LIBS) $(OBJCOMP)
	-ln -s $(TARGET) $(TARGET0)
	-ln -s $(TARGET) $(TARGET1)
	-ln -s $(TARGET) $(TARGET2)
	-$(DEL_FILE) build/$(TARGET)
	-$(DEL_FILE) build/$(TARGET0)
	-$(DEL_FILE) build/$(TARGET1)
	-$(DEL_FILE) build/$(TARGET2)
	-$(MOVE) $(TARGET) $(TARGET0) $(TARGET1) $(TARGET2) build/



staticlib: $(TARGETA)

$(TARGETA):  $(OBJECTS) $(OBJCOMP) 
	-$(DEL_FILE) $(TARGETA) 
	$(AR) $(TARGETA) $(OBJECTS)

Makefile: qextserialport.pro  /usr/share/qt/mkspecs/linux-g++-64/qmake.conf /usr/share/qt/mkspecs/common/g++.conf \
		/usr/share/qt/mkspecs/common/unix.conf \
		/usr/share/qt/mkspecs/common/linux.conf \
		/usr/share/qt/mkspecs/qconfig.pri \
		/usr/share/qt/mkspecs/features/qt_functions.prf \
		/usr/share/qt/mkspecs/features/qt_config.prf \
		/usr/share/qt/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt/mkspecs/features/default_pre.prf \
		/usr/share/qt/mkspecs/features/release.prf \
		/usr/share/qt/mkspecs/features/default_post.prf \
		/usr/share/qt/mkspecs/features/unix/thread.prf \
		/usr/share/qt/mkspecs/features/qt.prf \
		/usr/share/qt/mkspecs/features/moc.prf \
		/usr/share/qt/mkspecs/features/warn_on.prf \
		/usr/share/qt/mkspecs/features/resources.prf \
		/usr/share/qt/mkspecs/features/uic.prf \
		/usr/share/qt/mkspecs/features/yacc.prf \
		/usr/share/qt/mkspecs/features/lex.prf \
		/usr/share/qt/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtCore.prl
	$(QMAKE) -unix -o Makefile qextserialport.pro
/usr/share/qt/mkspecs/common/g++.conf:
/usr/share/qt/mkspecs/common/unix.conf:
/usr/share/qt/mkspecs/common/linux.conf:
/usr/share/qt/mkspecs/qconfig.pri:
/usr/share/qt/mkspecs/features/qt_functions.prf:
/usr/share/qt/mkspecs/features/qt_config.prf:
/usr/share/qt/mkspecs/features/exclusive_builds.prf:
/usr/share/qt/mkspecs/features/default_pre.prf:
/usr/share/qt/mkspecs/features/release.prf:
/usr/share/qt/mkspecs/features/default_post.prf:
/usr/share/qt/mkspecs/features/unix/thread.prf:
/usr/share/qt/mkspecs/features/qt.prf:
/usr/share/qt/mkspecs/features/moc.prf:
/usr/share/qt/mkspecs/features/warn_on.prf:
/usr/share/qt/mkspecs/features/resources.prf:
/usr/share/qt/mkspecs/features/uic.prf:
/usr/share/qt/mkspecs/features/yacc.prf:
/usr/share/qt/mkspecs/features/lex.prf:
/usr/share/qt/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -unix -o Makefile qextserialport.pro

dist: 
	@$(CHK_DIR_EXISTS) build/obj/qextserialport1.0.0 || $(MKDIR) build/obj/qextserialport1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) build/obj/qextserialport1.0.0/ && $(COPY_FILE) --parents qextserialbase.h qextserialport.h posix_qextserialport.h build/obj/qextserialport1.0.0/ && $(COPY_FILE) --parents qextserialbase.cpp qextserialport.cpp posix_qextserialport.cpp build/obj/qextserialport1.0.0/ && (cd `dirname build/obj/qextserialport1.0.0` && $(TAR) qextserialport1.0.0.tar qextserialport1.0.0 && $(COMPRESS) qextserialport1.0.0.tar) && $(MOVE) `dirname build/obj/qextserialport1.0.0`/qextserialport1.0.0.tar.gz . && $(DEL_FILE) -r build/obj/qextserialport1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) build/$(TARGET) 
	-$(DEL_FILE) build/$(TARGET0) build/$(TARGET1) build/$(TARGET2) $(TARGETA)
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

build/obj/qextserialbase.o: qextserialbase.cpp qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/obj/qextserialbase.o qextserialbase.cpp

build/obj/qextserialport.o: qextserialport.cpp qextserialport.h \
		posix_qextserialport.h \
		qextserialbase.h \
		win_qextserialport.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/obj/qextserialport.o qextserialport.cpp

build/obj/posix_qextserialport.o: posix_qextserialport.cpp posix_qextserialport.h \
		qextserialbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/obj/posix_qextserialport.o posix_qextserialport.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

