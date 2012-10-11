#include "Dice.h"


Dice::Dice(void)
{
	Die = 0;
}


Dice::~Dice(void)
{
}

int Dice::RollDice()
{
	Die = rand() % 6 + 1;
	return Die;
}