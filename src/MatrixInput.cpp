#include "MatrixInput.hpp"

MatrixInput::MatrixInput(double * globalAngles, unsigned int anglesAmount)
{
	this->anglesAmount = anglesAmount;
	this->globalAngles = globalAngles;
}


void MatrixInput::printfGlobalAngles()
{
	for (unsigned int i = 0; i < anglesAmount; ++i)
	{
		std::cout << globalAngles[i] << "\t" ;
	}
	std::cout << std::endl;
}