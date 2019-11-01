TARGET=ImageTests
SOURCES+=ImageTests.cpp ../src/Image.cpp
HEADERS+= ../include/Image.h
CONFIG-=app_bundle
QMAKE_CXXFLAGS += -std=c++1z
QMAKE_CXXFLAGS += -Wall -Wextra
QMAKE_CXXFLAGS += -g
INCLUDEPATH+=/usr/local/include
INCLUDEPATH+=../include
LIBS+= -L/usr/local/lib -lgtest -lgtest_main -pthread
LIBS+= -L/public/devel/2019/lib64 -lOpenImageIO
