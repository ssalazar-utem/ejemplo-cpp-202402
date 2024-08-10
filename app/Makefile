CXX = g++
CXXFLAGS = -g3 -Wall -std=c++17
MKDIR = mkdir -p

LIBS = -lm -lcurl

directorios:
	$(MKDIR) build dist

Uf.o: directorios Uf.cpp
	$(CXX) $(CXXFLAGS) -c Uf.cpp -o build/Uf.o

ValorUf.o: directorios ValorUf.cpp
	$(CXX) $(CXXFLAGS) -c ValorUf.cpp -o build/ValorUf.o

main.o: directorios main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o build/main.o

all: clean main.o ValorUf.o Uf.o
	$(CXX) $(CXXFLAGS) -o dist/programa \
	build/main.o build/ValorUf.o  build/Uf.o \
	$(LIBS)
	rm -fr build

clean:
	rm -fr *.o a.out core programa dist build

.DEFAULT_GOAL := all
