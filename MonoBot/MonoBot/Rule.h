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

	Rule(void);
	~Rule(void);

	void SetProperty(const bool Boolean) {Property = Boolean;}
	void SetPropertyStatus(int Status) {PropertyStatus = (PropertyStatus_t)Status;}

private:
	bool Property;
	PropertyStatus_t PropertyStatus;
};

