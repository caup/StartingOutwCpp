#pragma once
#include <string>

class Coin
{
public:
	Coin();
	~Coin();

	void toss();
	std::string getSideUp();
private:
	std::string sideUp;
};

