#include "MathElement.hpp"

class FunctionElement public: MathElement
{
public:
	FunctionElement(double ( *function )() ,double * angle)
	{
		this->angle=angle;
		this->function=function;
	};

	~FunctionElement(){};

	double calc()
	{
		return function(*angle);
	};

private:

	double * angle;
	double ( * function )();
};