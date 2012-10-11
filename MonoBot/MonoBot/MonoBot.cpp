#include "SelectRules.h"
#include "CheckRule.h"
#include "InputClass.h"
#include "MonopolyMechanics.h"
#include "Dice.h"
#include "SortInput.h"
#include "Rule.h"

#include <vector>
#include <map>
#include <string>
#include <stdio.h>
#include <iostream>
#include <fstream>

void SetPropertyPrices();


std::map<std::string, std::vector<int>> Properties;

std::vector<int> OldKent;
std::vector<int> WhiteChapel;
std::vector<int> AngelIslington;
std::vector<int> Euston;
std::vector<int> Pentonville;
std::vector<int> PallMall;
std::vector<int> Whitehall;
std::vector<int> Northumberland;
std::vector<int> Bow;
std::vector<int> Marlborough;
std::vector<int> Vines;
std::vector<int> TheStrand;
std::vector<int> Fleet;
std::vector<int> Trafalgar;
std::vector<int> Leicester;
std::vector<int> Coventry;
std::vector<int> Piccadilly;
std::vector<int> Regent;
std::vector<int> Oxford;
std::vector<int> Bond;
std::vector<int> ParkLane;
std::vector<int> Mayfair;

std::vector<Rule> RuleList;


int main()
{
	MonopolyMechanics Game;
	InputClass RuleInput;
	SortInput Sort;
	//std::ifstream RulesStream;
	//std::string RulesFile; 

	//Input all the rules to be sorted
	std::ifstream RulesFile("Rules.txt");
	if(!RulesFile) return -1;

	RulesFile >> RuleInput;
	
	Sort.GetInput(RuleInput.GetRules());
	Sort.SortRules(RuleList);

	int Movement = 0;
	int DiceCount = 0;

	Dice Die;
	
	//Roll dice twice
	do
	{
		std::cout << (Movement += Die.RollDice());
		DiceCount++;
	}while(DiceCount%2 != 0);

	Game.Movement(Movement);
	getchar();

	return 0;
}

void SetPropertyPrices()
{
	Properties["Old Kent Road"] = OldKent;
	Properties["Whitechapel Road"] = WhiteChapel;

	Properties["The Angel Islington"] = AngelIslington;
	Properties["Euston Road"] = Euston;
	Properties["Pentonville Road"] = Pentonville;

	Properties["Pall Mall"] = PallMall;
	Properties["Whitehall"] = Whitehall;
	Properties["Northumberland Avenue"] = Northumberland;

	Properties["Bow Street"] = Bow;
	Properties["Marlborough Street"] = Marlborough;
	Properties["Vines"] = Vines;

	Properties["The Strand"] = TheStrand;
	Properties["Fleet Street"] = Fleet;
	Properties["Trafalgar Square"] = Trafalgar;

	Properties["Leicester Square"] = Leicester;
	Properties["Coventry Street"] = Coventry;
	Properties["Piccadilly"] = Piccadilly;

	Properties["Regent Street"] = Regent;
	Properties["Oxford Street"] = Oxford;
	Properties["Bond Street"] = Bond;

	Properties["Park Lane"] = ParkLane;
	Properties["Mayfair"] = Mayfair;

	/*
		Vector Key:
		[0] = Position on board;
		[1] = Price of propety;
		[2] = Owned or not;
	*/

	OldKent[0] = 1;
	OldKent[1] = 60;
	OldKent[2] = 0;

	WhiteChapel[0] = 3;
	WhiteChapel[1] = 60;
	WhiteChapel[2] = 0;

	AngelIslington[0] = 6;
	AngelIslington[1] = 100;
	AngelIslington[2] = 0;

	Euston[0] = 8;
	Euston[1] = 100;
	Euston[0] = 8;

	Pentonville[0] = 9;
	Pentonville[1] = 120;
	Pentonville[2] = 0;

	PallMall[0] = 11;
	PallMall[1] = 140;
	PallMall[2] = 0;

	Whitehall[0] = 13;
	Whitehall[1] = 140;
	Whitehall[2] = 0;

	Northumberland[0] = 14;
	Northumberland[1] = 160;
	Northumberland[2] = 0;

	Bow[0] = 16;
	Bow[1] = 180;
	Bow[2] = 0;
	
	Marlborough[0] = 18;
	Marlborough[1] = 180;
	Marlborough[2] = 0;

	Vines[0] = 19;
	Vines[1] = 200;
	Vines[2] = 0;

	TheStrand[0] = 21;
	TheStrand[1] = 220;
	TheStrand[2] = 0;

	Fleet[0] = 23;
	Fleet[1] = 220;
	Fleet[2] = 0;

	Trafalgar[0] = 24;
	Trafalgar[1] = 240;
	Trafalgar[2] = 0;

	Leicester[0] = 26;
	Leicester[1] = 260;
	Leicester[2] = 0;

	Coventry[0] = 27;
	Coventry[1] = 260;
	Coventry[2] = 0;

	Piccadilly[0] = 29;
	Piccadilly[1] = 280;
	Piccadilly[2] = 0;

	Regent[0] = 31;
	Regent[1] = 300;
	Regent[2] = 0;

	Oxford[0] = 32;
	Oxford[1] = 300;
	Oxford[2] = 0;

	Bond[0] = 34;
	Bond[1] = 320;
	Bond[2] = 0;

	ParkLane[0] = 37;
	ParkLane[1] = 350;
	ParkLane[2] = 0;

	Mayfair[0] = 39;
	Mayfair[1] = 400;
	Mayfair[2] = 0;

}

/*

Deciding which rules to fire.

AI works in a logical way.

i.e. 

First checks where it landed
If action needed do action for landed zone.
Check to see if upgrade is possible.
Offer to buy other propeties.

*/


