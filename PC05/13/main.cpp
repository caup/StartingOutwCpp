//Random Number Guessing Game Enhancement
#include <iostream>
#include <ctime>

int main()
{
	const int MIN_VALUE = 1,
		MAX_VALUE = 100;

	srand(time(0));
	int randNum = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;

	int input, numGuesses = 0;

	std::cout << "Guess a number between 1 and 100\n";
	std::cin >> input;
	numGuesses += 1;

	if (input != randNum)
	{
		do
		{
			if (input < randNum)
			{
				std::cout << "Too low! Guess again!\n";
				std::cin >> input;
				numGuesses += 1;
			}
			else if (input > randNum)
			{
				std::cout << "Too high! Guess again!\n";
				std::cin >> input;
				numGuesses += 1;
			}

		} while (input != randNum);
	}
	std::cout << "Congratulations! You guessed " << numGuesses << " times.";

	return 0;
}