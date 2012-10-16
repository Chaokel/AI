#pragma once
#include "SelectRules.h"

class MonopolyMechanics
{
public:
	enum State_t
	{
		NotSet = 0,
		Movement = 1,
		Upgrade = 2,
		Trading = 3,
		Waiting = 4
	};

	MonopolyMechanics(void);
	~MonopolyMechanics(void);

	void Movement(int MoveValue);
	void CheckPosition();
	
	State_t GetState() const {return State;}

private:
	int Money;
	int Position;
	int PropetiesOwned;

	State_t State;
	SelectRules Inference;
};