#include "MonopolyMechanics.h"


MonopolyMechanics::MonopolyMechanics(void)
{
	Position = 0;
	Money = 1500;
	PropetiesOwned = 0;
	State = 0;
}


MonopolyMechanics::~MonopolyMechanics(void)
{
}

void MonopolyMechanics::Movement(int MoveValue)
{
	Position += MoveValue;
}

void MonopolyMechanics::CheckPosition()
{
	if(((Position % 40) != 2) && ((Position % 40) != 4) && ((Position % 40) != 7) && ((Position %40) !=  22) && ((Position %40) != 33) && ((Position%40) != 36) && ((Position%40) != 38) && ((Position%40) != 10) && ((Position%40) != 20) && ((Position%40) != 30))
	{
		//Have landed on a propety

		Inference.PickType(Position, 1);
	}
	else if(((Position%40) == 10) || ((Position%40) == 30))
	{
		//Have landed on either, goto jail or are in jail.

		Inference.PickType(Position, 2);
	}
	else
	{
		//Have landed on other
		
		Inference.PickType(Position, 3);
	}
}

/*
Properties:
1
3
5
6
8
9
11
12
13
14
15
16
18
19
21
23
24
25
26
27
28
29
31
32
34
35
37
39
Other:
2
4
7
17
22
33
36
38

10
20
30
*/