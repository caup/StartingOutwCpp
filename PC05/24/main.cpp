//Sales Bar Chart
#include <iostream>

int main()
{
	int store1, store2, store3;

	std::cout << "Enter today's sales for store 1: ";
	std::cin >> store1;
	std::cout << "Enter today's sales for store 2: ";
	std::cin >> store2;
	std::cout << "Enter today's sales for store 3: ";
	std::cin >> store3;

	std::cout << "	DAILY SALES\n"
		<< " (each * = $100)\n";

	for (int a = 0; a < store1; a++)
	{
		if (a == 0)
		{
			std::cout << "Store 1: ";
		}

		std::cout << "*";
	}

	for (int b = 0; b < store2; b++)
	{
		if (b == 0)
		{
			std::cout << "\nStore 2: ";
		}

		std::cout << "*";
	}

	for (int c = 0; c < store3; c++)
	{
		if (c == 0)
		{
			std::cout << "\nStore 3: ";
		}

		std::cout << "*";
	}

	return 0;
}