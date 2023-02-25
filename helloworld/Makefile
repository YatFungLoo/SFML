# g++ -c .cpp
# g++ .o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system

MF=Makefile

EXE=sfml-app
INC=
SRC=helloworld.cpp

CXX=g++
CXXFLAGS=
LFLAGS=
LDFLAGS=-lsfml-graphics -lsfml-window -lsfml-system

.SUFFIXES:
.SUFFIXES: .cpp .o

OBJ=$(SRC:.cpp=.o) 

.cpp.o:	
	$(CXX) $(CXXFLAGS) -c $<

all:	$(EXE)

$(OBJ):	$(INC)

$(EXE):	$(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ) $(LFLAGS) $(LDFLAGS)

$(OBJ):	$(MF)

clean:
	rm -f $(OBJ) $(EXE) core
