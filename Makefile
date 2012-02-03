CPP=g++
CXXFLAGS= -W -Wall -ansi -pedantic
LDFLAGS=
EXEC=Generateur
SRC= $(wildcard src/*.cpp)
OBJ= $(SRC:.cpp=.o)

all: $(EXEC)

Generateur: $(OBJ)
	$(CPP) -o $@ $^ $(LDFLAGS)

main.o: *.hpp

%.o: %.cpp
	$(CPP) -o $@ -c $< $(CXXFLAGS)

.PHONY: clean mrproper

clean:
	rm -rf src/*.o

mrproper: clean
	rm -rf $(EXEC)
