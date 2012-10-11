#pragma once

#include <iostream>
#include <string>
#include <vector>

class InputClass
{
public:
	InputClass(void);
	~InputClass(void);

	friend std::istream & operator >>(std::istream & input, InputClass & I);

	const std::vector<std::string> GetRules() {return Rules;}

private:

	int Count;
	std::string Temp;
	std::vector<std::string> Rules;
};

