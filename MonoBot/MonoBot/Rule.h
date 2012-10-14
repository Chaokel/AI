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
	enum MoneySign_t
	{
		GreaterThan = 1,
		LessThan = 2,
		EqualTo = 3
	};
	enum MoneyText_t
	{
		PropertyValue =  1


	};

	Rule(void);
	~Rule(void);

	void SetProperty(const bool Boolean) {Property = Boolean;}
	void SetPropertyStatus(int Status) {PropertyStatus = (PropertyStatus_t)Status;}

	void SetMoneyRule(const bool Boolean) {MoneyRule = Boolean;}

	void SetState(int Status) {State = (State_t)Status;}

	void SetMoney(int Price) {Money = Price;}
	void SetMoneySign(int Sign) {MoneySign = (MoneySign_t)Sign;}

	void SetMultiplier(int Multiple) {Multiplier = Multiple;}
	void SetMoneyText(int Text) {MoneyText = (MoneyText_t)Text;}

	//Getters
	bool GetProperty() const {return Property;}
	bool GetMoneyRule() const {return MoneyRule;}
	int GetMoney() const {return Money;}
	int GetMultiplier() const {return Multiplier;}
	MoneySign_t GetMoneySign() const {return MoneySign;}
	PropertyStatus_t GetPropertyStatus() const {return PropertyStatus;}
	State_t GetState() const {return State;}
	MoneyText_t GetMoneyText() const {return MoneyText;}

private:
	bool Property;
	bool MoneyRule;
	int Money;
	int Multiplier;

	MoneySign_t MoneySign;
	PropertyStatus_t PropertyStatus;
	State_t State;
	MoneyText_t MoneyText
};

