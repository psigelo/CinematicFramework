#include "MultiplicationBlock.hpp"

MultiplicationBlock::MultiplicationBlock( )
{
	zeroFlag=false;
}

MultiplicationBlock::MultiplicationBlock( bool zeroFlag )
{
	this->zeroFlag = zeroFlag;
}

MultiplicationBlock::MultiplicationBlock( std::vector < MathElement * > mathElements)
{
	this->mathElements=mathElements;
	zeroFlag=false;
}

 bool MultiplicationBlock::isZero() const
{
	return zeroFlag;
}

double MultiplicationBlock::calc()
{
	double result = 1;
	for (unsigned int i = 0; i < mathElements.size(); ++i)
	{
		result *= mathElements.at( i )->calc();
	}
	return result;
}

MultiplicationBlock& MultiplicationBlock::operator * ( const MultiplicationBlock & block2 )
{
	MultiplicationBlock * result;

	if( !this->isZero()  &&  !block2.isZero()  )
	{
		result = new MultiplicationBlock();

		for (unsigned int i = 0; i < this->mathElements.size(); ++i)
		{
			result->mathElements.push_back( this->mathElements.at( i ) );
		}

		for (unsigned int i = 0; i <  block2.mathElements.size(); ++i)
		{
			result->mathElements.push_back( block2.mathElements.at( i ) );
		}
	}
	else
	{
		result = new MultiplicationBlock( false );
	}

	return * result;
}

