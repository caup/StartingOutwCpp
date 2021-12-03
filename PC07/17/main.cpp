// Tossing Coins for a Dollar
#include <iostream>
#include <Windows.h>
#include "Coin.h"

int main()
{
	Coin quarter,
		 dime,
		 nickel;

	int balance = 0,
		round = 1;

	std::cout << "Starting balance: " << balance;

	while (balance < 100)
	{
		quarter.toss();
		dime.toss();
		nickel.toss();
		
		std::cout << "\nRound " << round << '\n';
		std::cout << "Q: " << quarter.getSideUp() << " D: " << dime.getSideUp() << " N: " << nickel.getSideUp();

		if (quarter.getSideUp() == "heads")
		{
			balance += 25;
		}
		if (dime.getSideUp() == "heads")
		{
			balance += 10;
		}
		if (nickel.getSideUp() == "heads")
		{
			balance += 5;
		}

		std::cout << "\nBalance: " << balance;

		round++;
		Sleep(2000);
	}

	if (balance > 100)
	{
		std::cout << "\nYou lose!\n";
	}
	else
	{
		std::cout << "\nYou win!\n";
	}

	return 0;
}