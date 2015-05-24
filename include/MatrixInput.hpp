#include <iostream>

class MatrixInput
{

public:
	
	MatrixInput( double * globalAngles, unsigned int anglesAmount );
	~MatrixInput();
	void printfGlobalAngles();
	double calc();

private:
	double * globalAngles; // Esta pensado asi sin punteros para mejorar el rendimiento. La idea es que estos estén definidos en el heap de la clase que utilice a MatrixInput.
	unsigned int anglesAmount; // Este es la cantidad de angulos.

	vector < MultiplicationBlock > blocks;// Se tomará en cuenta que 

};