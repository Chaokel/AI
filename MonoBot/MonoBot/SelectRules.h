#pragma once

/*
	Used to parse in the rules from a rule data base.

	Determines which rules should be fired to decide outputs.

*/

class SelectRules
{
public:
	enum RuleType {Property = 1, Jail = 2, Other = 3};

	SelectRules(void);
	~SelectRules(void);

	void PickType(int Position, int Rule);


private:

};

