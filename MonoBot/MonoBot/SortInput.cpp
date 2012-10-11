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