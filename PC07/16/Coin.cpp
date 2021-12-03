#include "Coin.h"
#include <random>
#include <time.h>

Coin::Coin()
{
	toss();
}

Coin::~Coin()
{
}

void Coin::toss()
{
	srand(time(0));
	int num = rand() % 10 + 1;

	if (num <= 5)
	{
		sideUp = "heads";
	}
	else
	{
		sideUp = "tails";
	}
}

std::string Coin::getSideUp()
{
	return sideUp;
}
