CXX = g++
COMPILE = -Wall -std=c++17
BUILDDIR = build/
PHYSICSDIR = physics/
SRC = src/
MAIN = main.cpp

all: ForceObject.o 
	$(CXX) $(COMPILE) $(MAIN) $(BUILDDIR)ForceObject.o


ForceObject.o:
	$(CXX) $(COMPILE) $(PHYSICSDIR)$(SRC)ForceObject.cpp -c -o $(BUILDDIR)ForceObject.o

PhysicalObject.o:
	$(CXX) $(COMPILE) $(PHYSICSDIR)$(SRC)PhysicalObject.cpp -c -o $(BUILDDIR)PhysicalObject.o