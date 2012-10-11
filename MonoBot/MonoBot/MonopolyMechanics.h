#pragma once
#include "SelectRules.h"

class MonopolyMechanics
{
public:
	MonopolyMechanics(void);
	~MonopolyMechanics(void);

	void Movement(int MoveValue);
	void CheckPosition();
	
private:
	int Money;
	int Position;
	int PropetiesOwned;

	SelectRules Inference;
};