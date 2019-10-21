#-------------------------------------------------
#
# Project created by QtCreator 2014-10-03T18:30:31
#
#-------------------------------------------------

TEMPLATE = app
CONFIG   += console
CONFIG   -= app_bundle

# before include(base.pri) !!!
ios {
    TEMPLATE = lib
    CONFIG -= console

    CONFIG += build_x2t_as_library
    DEFINES += BUILD_X2T_AS_LIBRARY_DYLIB

    CONFIG += shared
    CONFIG += plugin

    CONFIG += core_static_link_libstd

    QMAKE_LFLAGS += -exported_symbols_list $$PWD/../../src/dylib/export
}

include(X2tConverter.pri)

!build_x2t_as_library {
    SOURCES += ../../src/main.cpp

    DESTDIR = "$$PWD/../../../build/bin/$$CORE_BUILDS_PLATFORM_PREFIX"
} else {
    HEADERS += ../../src/dylib/x2t.h
    SOURCES += ../../src/dylib/x2t.cpp
}
