VPATH=../../include:../../objects:.:../../src
COMPILER=g++ -std=c++11
CFLAGS = -Wall -fPIC -I../../include   -I../../objects -I. -frtti -O3 -g

test: test.cpp MatrixInput.cpp  
	cd ../../; make MatrixInput.o
	$(COMPILER) $(CFLAGS)  test.cpp ../../objects/MatrixInput.o -o ./test

clean:
	rm -f test

run:
	./test