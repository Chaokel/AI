#include "InputClass.h"


InputClass::InputClass(void)
{
	Count = 0;
}


InputClass::~InputClass(void)
{
}

std::istream & operator >>(std::istream& input, InputClass& I)
{

	while(getline(input, I.Temp))
	{
		I.Rules[I.Count] = I.Temp;
		I.Count++;
	}
	return input;
}