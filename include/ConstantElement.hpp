class ConstantElement
{
public:
	ConstantElement(double value){this->value=value;};
	~ConstantElement();
	double calc(){return value};
private:
	double value;
};