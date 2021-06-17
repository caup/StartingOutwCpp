//Random Number Guessing Game
#include <iostream>
#include <ctime>

int main()
{
	const int MIN_VALUE = 1,
			  MAX_VALUE = 100;
	 
	srand(time(0));
	int randNum = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;

	int input;

	std::cout << "Guess a number between 1 and 100\n";
	std::cin >> input;

	while (input < 1 || input > 100)
	{
		std::cout << "Number must be between 1 and 100! Try again!\n";
		std::cin >> input;
	}

	do
	{
		if (input < randNum)
		{
			std::cout << "Too low! Guess again!\n";
			std::cin >> input;
		}
		else if (input > randNum)
		{
			std::cout << "Too high! Guess again!\n";
			std::cin >> input;
		}

	} while (input != randNum);

	std::cout << "Congratulations!";

	return 0;
}