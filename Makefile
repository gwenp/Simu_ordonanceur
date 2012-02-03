CPP=g++
CXXFLAGS= -W -Wall -ansi -pedantic
LDFLAGS=
EXEC=Generateur Simulateur
SRC_GENERATEUR= $(wildcard src/generateur/*.cpp)
OBJ_GENERATEUR= $(SRC_GENERATEUR:.cpp=.o)

SRC_SIMULATEUR= $(wildcard src/simulateur/*.cpp)
OBJ_SIMULATEUR= $(SRC_SIMULATEUR:.cpp=.o)

all: $(EXEC)

Generateur: $(OBJ_GENERATEUR)
	$(CPP) -o $@ $^ $(LDFLAGS)

Simulateur: $(OBJ_SIMULATEUR)
	$(CPP) -o $@ $^ $(LDFLAGS)

main.o: *.hpp

%.o: %.cpp
	$(CPP) -o $@ -c $< $(CXXFLAGS)

.PHONY: clean mrproper

clean:
	rm -rf src/**/*.o

mrproper: clean
	rm -rf $(EXEC)
