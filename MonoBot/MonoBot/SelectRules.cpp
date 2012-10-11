#include "SelectRules.h"


SelectRules::SelectRules(void)
{
}


SelectRules::~SelectRules(void)
{
}

void SelectRules::PickType(int Position, int Rule)
{
	if(Rule == Property)
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
	}
}

