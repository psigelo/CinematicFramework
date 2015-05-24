#include "MathElement.hpp"

class MultiplicationBlock
{
public:
	MultiplicationBlock(vector < MathElement * > mathElements);
	~MultiplicationBlock(){};
	double calc();
	MultiplicationBlock& operator * (const MultiplicationBlock &block2);
private:

	vector < MathElement * > mathElements;

};