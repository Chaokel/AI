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
					(*RuleList)[RuleNumber].SetMoney(true);

					stream >> tempword;
					if(tempword == "<")
					{

					}
					else if(tempword == ">")
					{

					}
					else if(tempword == "=")
					{

					}
					else
					{
						//throw error?
					}
				}
				else if(tempword == "jail")
				{

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