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

void SortInput::SortRules(std::vector<Rule>& RuleList)
{
	int count = 0;
	int StreamPosition = 0;

	std::string temp = "/0";
	std::string tempword = "/0";

	temp = Rules[count];
	while(Rules[count] != "/0")
	{
		temp = Rules[count];
		if(temp.substr(0, 1) == "IF")
		{
			//need to parse this liLSPECS_FOR_SAL=1                              j                                           _M_X86                  WIN32                  _DEBUG               	   _CONSOLE               	   _UNICODE                  UNICODE                  _CPPUNWIND                                    __MSVC_RUNTIME_CHECKS            <                  P                   a      Debug\               ?   C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\include               F   C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\atlmfc\include               <   C:\Program Files (x86)\Microsoft SDKs\Windows\v7.0A\include               =   C:\Program Files (x86)\Microsoft SDKs\Windows\v7.0A\\include            ;   B   C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\atlmfc\lib            ;   ;   C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\lib            �      F:\Uni\ICT 219\MonoBot\MonoBot                  _MT                              �                         	   "Rule.h"           &   f:\uni\ict 219\