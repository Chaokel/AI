#include "SelectRules.h"


SelectRules::SelectRules(void)
{
	RuleNumber = 1;
}


SelectRules::~SelectRules(void)
{
}

int SelectRules::PickType(int MaxRules, std::vector<Rule> *Rule, MonopolyMechanics Memory)
{
	//First validation check to see if rule is applicable. State test.
	do
	{
		if((*Rule)[RuleNumber].GetState() == Memory.GetState())
		{
			//Second validation. Property test
			if((*Rule)[RuleNumber].GetProperty() == true) //true doesn't work here. or does it?
			{

			}

		}
		else
		{
			RuleNumber++;
		}
	}while(RuleNumber < MaxRules)


	/*if(Rule == Property)
	{
		//execute property rule
	}
	else if(Rule == Jail)
	{
		//execute jail rules
	}
	else if(Rule == Other)
	{
		//execute other rule
		//Low priority
	}
	else
	{
		//Throw errow. Possibly try / catch
	}*/
}

