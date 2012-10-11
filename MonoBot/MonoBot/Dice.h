#pragma once
#include <stdlib.h>

class Dice
{
public:
	Dice(void);
	~Dice(void);

	int RollDice();

private:

	int Die;
};

