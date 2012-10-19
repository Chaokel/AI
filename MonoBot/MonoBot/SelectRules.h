#pragma once

/*
	Used to parse in the rules from a rule data base.

	Determines which rules should be fired to decide outputs.

*/
#include "Rule.h"
#include "MonopolyMechanics.h"

#include <vector>

class SelectRules
{
public:
	enum RuleType {Property = 1, Jail = 2, Other = 3};

	SelectRules(void);
	~SelectRules(void);

	int PickType(int MaxRules, std::vector<Rule> *Rules, MonopolyMechanics Memory);


private:

	int RuleNumber;
};

