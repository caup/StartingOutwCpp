//Pattern Display
#include <iostream>

int main()
{
	std::cout << "Pattern A:\n";

	for (int r = 1; r <= 10; r++)
	{
		for (int c = 0; c < r; c++)
		{
			std::cout << '+';
		}

		std::cout << std::endl;
	}

	std::cout << "Pattern B:\n";

	for (int r = 1; r <= 10; r++)
	{
		for (int c = 10; c >= r; c--)
		{
			std::cout << '+';
		}

		std::cout << std::endl;
	}
}