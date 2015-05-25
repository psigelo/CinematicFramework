VPATH=include:src:objects
COMPILER=g++ -std=c++11
CFLAGS=-Wall -fPIC -I./include -I./objects -I./src -frtti -O3 -g

all: MatrixInput.o MultiplicationBlock.o FunctionSet.o

MatrixInput.o: MatrixInput.cpp 
	@mkdir -p objects
	@$(COMPILER) $(CFLAGS) -c $< -o ./objects/MatrixInput.o
	@echo Compiling MatrixInput 

MultiplicationBlock.o: MultiplicationBlock.cpp MultiplicationBlock.hpp  MathElement.hpp
	@mkdir -p objects
	@$(COMPILER) $(CFLAGS) -c $< -o ./objects/MultiplicationBlock.o
	@echo Compiling MultiplicationBlock 

FunctionSet.o: FunctionSet.cpp
	@mkdir -p objects
	@$(COMPILER) $(CFLAGS) -c $< -o ./objects/FunctionSet.o
	@echo Compiling FunctionSet 

clean: 
	rm -r objects