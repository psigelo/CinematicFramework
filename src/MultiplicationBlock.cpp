MultiplicationBlock::MultiplicationBlock(vector < MathElement * > mathElements)
{
	this->mathElements=mathElements;
}

double MultiplicationBlock::calc()
{
	double result = 1;
	for (unsigned int i = 0; i < mathElements.size(); ++i)
	{
		result *= mathElements.at( i ).calc();
	}
	return result;
}

MultiplicationBlock& MultiplicationBlock::operator * (const MultiplicationBlock &block2)
{
	
	for (unsigned int i = 0; i < this->mathElements.size() + block2.mathElements.size(); ++i)
	{
		
	}
}

// PENSAR EN EL USO CORRECTO DE LA MEMORIA.