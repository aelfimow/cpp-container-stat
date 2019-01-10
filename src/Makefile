.PHONY: all
.PHONY: deps

CXXFLAGS  = -O3 -m64
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

FILES = $(wildcard *.cpp)
FILES_OBJ = $(FILES:.cpp=.o)

all: $(FILES_OBJ)
	$(AS) rdtsc_func.S --64 -o rdtsc_func.o
	$(CXX) $(wildcard *.o) -o cpp-container-stat.exe $(CXXFLAGS)

deps:
	$(CXX) -MM $(FILES) > Makefile.deps

include Makefile.deps
