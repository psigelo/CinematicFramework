#include "MatrixInput.hpp"

int main()
{
	double * angles = new double[10]();;
	for (int i = 0; i < 10; ++i)
	{
		angles[i]=i;
	}
	
	MatrixInput * input = new MatrixInput( angles, 10 );
	input->printfGlobalAngles();


	for (int i = 0; i < 10; ++i)
	{
		angles[i]=i%3;
	}
	
	input->printfGlobalAngles();
}