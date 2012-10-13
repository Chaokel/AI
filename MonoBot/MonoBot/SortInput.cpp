#include "SortInput.h"


SortInput::SortInput(void)
{
	RuleNumber = 1;
}


SortInput::~SortInput(void)
{
}

void SortInput::GetInput(const std::vector<std::string> &I)
{
	Rules = I;
}

void SortInput::SortRules(std::vector<Rule> *RuleList)
{
	int count = 0;
	int StreamPosition = 0;

	std::string temp = "/0";
	std::string tempword = "/0";
	int tempvalue = 0;

	temp = Rules[count];
	std::stringstream stream(temp);
	while(Rules[count] != "/0")
	{
		//temp = Rules[count];
		if(tempword == "IF")
		{
			while(stream >> tempword)
			{
				if(tempword == "property")
				{
					(*RuleList)[RuleNumber].SetProperty(true);
					stream >> tempword; // next word will be is
					stream >> tempword; // word after will contain information on who the rule is about

					if(tempword == "owned")
					{
						(*RuleList)[RuleNumber].SetPropertyStatus(2);
					}
					else if(tempword == "not")
					{
						(*RuleList)[RuleNumber].SetPropertyStatus(1);
					}
					else if(tempword == "player")
					{
						(*RuleList)[RuleNumber].SetPropertyStatus(3);
					}
				}
				else if(tempword == "money")
				{
					(*RuleList)[RuleNumber].SetMoneyRule(true);

					stream >> tempword;
					if(tempword == "<")
					{
						(*RuleList)[RuleNumber].SetMoneySign(2);
					}
					else if(tempword == ">")
					{
						(*RuleList)[RuleNumber].SetMoneySign(1);
					}
					else if(tempword == "=")
					{
						(*RuleList)[RuleNumber].SetMoneySign(3);
					}
					else
					{
						//throw error?
					}

					stream  >> tempvalue;
					//Not int
					if(!std::cin.good())
					{

					}
					else
					{
						(*RuleList)[RuleNumber].SetMoney(tempvalue);
					}
				}
				else if(tempword == "jail")
				{

				}
				//Rule has a phase based component
				else if(tempword == "phase")
				{
					if(tempword == "movement")
					{
						(*RuleList)[RuleNumber].SetState(1);
					}
					else if(tempword == "upgrade")
					{
						(*RuleList)[RuleNumber].SetState(2);
					}
					else if(tempword == "trading")
					{
						(*RuleList)[RuleNumber].SetState(3);
					}
					else if(tempword == "waiting")
					{
						(*RuleList)[RuleNumber].SetState(4);
					}
				}

			}
			//need to parse this
			//RuleList[RuleNumber]->Property(1);

		}
		else if(tempword == "THEN")
		{

		}
		else
		{
			//throw error / skip
		}

	}

}