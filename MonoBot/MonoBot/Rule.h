#pragma once
class Rule
{
public:
	enum PropertyStatus_t
	{
		NotOwned = 1,
		Owned = 2,
		PlayerOwned = 3
	};
	//The states in which the rule can be called.
	enum State_t
	{
		Movement = 1,
		Upgrade = 2,
		Trading = 3,
		Waiting = 4
	};

	Rule(void);
	~Rule(void);

	void SetProperty(const bool Boolean) {Property = Boolean;}
	void SetPropertyStatus(int Status) {PropertyStatus = (PropertyStatus_t)Status;}

	void SetMoney(const bool Boolean) {Money = Boolean;}

	void SetState(int Status) {State = (State_t)Status;}
private:
	bool Property;
	bool Money;
	PropertyStatus_t PropertyStatus;
	State_t State;
};

