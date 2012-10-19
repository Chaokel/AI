#include "Rule.h"


Rule::Rule(void)
{
	Property = false;
	MoneyRule = false;
	Money = 0;
	Multiplier = 0;
	State = (State_t)0;
}


Rule::~Rule(void)
{
}
