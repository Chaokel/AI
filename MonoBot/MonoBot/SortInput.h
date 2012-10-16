#pragma once

#ifndef SORTINPUT_H
#define SORTINPUT_H

#include "Rule.h"
#include "Result.h"

#include <vector>
#include <string>
#include <sstream>
#include <iostream>

class SortInput
{
public:
	SortInput(void);
	~SortInput(void);

	void GetInput(const std::vector<std::string> &I);

	void SortRules(std::vector<Rule> *RuleList, std::vector<Result> *ResultList);

private:

	std::vector<std::string> Rules;
	int RuleNumber;

};

#endif

