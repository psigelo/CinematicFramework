#ifndef MULT_BLOCK_HPP
#define MULT_BLOCK_HPP

#include "MathElement.hpp"
#include <vector>

class MultiplicationBlock
{
public:
	MultiplicationBlock();
	MultiplicationBlock(bool zeroFlag);
	MultiplicationBlock( std::vector < MathElement * > mathElements );
	~MultiplicationBlock(){};
	double calc();
	bool  isZero() const;
	MultiplicationBlock & operator * ( const MultiplicationBlock &block2 );
private:

	std::vector < MathElement * > mathElements;
	bool zeroFlag;
};

#endif