// Coin Toss Simulator
#include <iostream>
#include <Windows.h>
#include "Coin.h"

int main()
{
	Coin shiny;

	std::cout << "Initial: " << shiny.getSideUp() << '\n';
	
	int heads = 0,
		tails = 0;

	for (int i = 1; i <= 20; i++)
	{
		shiny.toss();
		std::string result = shiny.getSideUp();
		std::cout << i << ": " << result << '\n';
		
		if (result == "heads")
		{
			heads++;
		}
		else if (result == "tails")
		{
			tails++;
		}

		Sleep(250);
	}

	std::cout << "heads: " << heads << '\n';
	std::cout << "tails: " << tails << '\n';

	return 0;
}