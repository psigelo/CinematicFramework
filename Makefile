VPATH=include:src:objects
COMPILER=g++ -std=c++11
CFLAGS=-Wall -fPIC -I./include -I./objects -I./src -frtti -O3 -g

all:MatrixInput.o

MatrixInput.o: MatrixInput.cpp 
	@mkdir -p objects
	@$(COMPILER) $(CFLAGS) -c $< -o ./objects/MatrixInput.o
	@echo Compiling MatrixInput 