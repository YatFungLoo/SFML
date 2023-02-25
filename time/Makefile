# g++ -c time.cpp
# g++ time.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system

MF=Makefile

EXE=time
INC=
SRC=time.cpp

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
