// Fishing Game Simulation
#include <iostream>
#include "Fish.h"

enum Things
{
	nothing = 1, smallfish, mediumfish, largefish, grenade, goldennugget
};

char userInput();

int main()
{
	Fish game;

	int points = 0;

	while (userInput())
	{
		int fishCaught;

		game.catchFish();
		fishCaught = game.getCatch();

		std::cout << "You found ";
		switch (fishCaught)
		{
		case nothing:
			std::cout << "nothing. (0 points)\n\n";
			break;
		case smallfish:
			std::cout << "a small fish. (1 points)\n\n";
			points++;
			break;
		case mediumfish:
			std::cout << "a medium fish. (2 points)\n\n";
			points += 2;
			break;
		case largefish:
			std::cout << "a medium fish. (3 points)\n\n";
			points += 3;
			break;
		case grenade:
			std::cout << "a live grenade. (game over)\n\n";
			exit(0);
			break;
		case goldennugget:
			std::cout << "a golden nugget! (10 points)\n\n";
			points += 10;
			break;
		}
	}

	if (points <= 1)
	{
		std::cout << "\nPoints earned " << points << "\nDid you even try?";
	}
	else if (points < 10)
	{
		std::cout << "\nPoints earned " << points << "\nYou did alright.";
	}
	else
	{
		std::cout << "\nPoints earned " << points << "\nYou're RICH!";
	}

	return 0;
}

char userInput()
{
	char input;
	std::cout << "Cast your fishing line? y/n: ";
	std::cin >> input;

	if (tolower(input) == 'y')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
