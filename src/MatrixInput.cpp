#include "MatrixInput.hpp"

MatrixInput::MatrixInput(double * globalAngles, unsigned int anglesAmount)
{
	this->anglesAmount = anglesAmount;
	this->globalAngles = globalAngles;
}

MatrixInput & MatrixInput::operator + ( const MatrixInput & mInput )
{
	MatrixInput * result = new MatrixInput( globalAngles, anglesAmount );


	for (unsigned int i = 0; i < this->blocks.size(); ++i)
	{
		for (unsigned int j = 0; j < mInput.blocks.size(); ++j)
		{
			result->blocks.push_back( this->blocks.at(i) * mInput.blocks.at(i) );
		}
	}

	return * result;
}

void MatrixInput::printfGlobalAngles()
{
	for (unsigned int i = 0; i < anglesAmount; ++i )
	{
		std::cout << globalAngles[ i ] << "\t" ;
	}
	std::cout << std::endl;
}