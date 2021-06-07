//Change for a Dollar Game
#include <iostream>

int main()
{
	const double PENNY_VALUE = 0.01,
				 NICKEL_VALUE = 0.05,
				 DIME_VALUE = 0.10,
				 QUARTER_VALUE = 0.25,
				 DOLLAR_VALUE = 1.00;
	
	int pennies, nickels, dimes, quarters;
	double total;

	std::cout << "--- Enter change equaling $1 ---\n";
	std::cout << " # of pennies:  ";
	std::cin >> pennies;
	std::cout << " # of nickels:  ";
	std::cin >> nickels;
	std::cout << " # of dimes:    ";
	std::cin >> dimes;
	std::cout << " # of quarters: ";
	std::cin >> quarters;
	std::cout << "--------------------------------\n";

	total = pennies * PENNY_VALUE + nickels * NICKEL_VALUE + dimes * DIME_VALUE + quarters * QUARTER_VALUE;
	std::cout << "Equals: $" << total << std::endl;

	if (total > DOLLAR_VALUE)
	{
		std::cout << "Higher than $1 - YOU LOSE!";
	}
	else if (total < DOLLAR_VALUE)
	{
		std::cout << "Lower than $1 - YOU LOSE!";
	}
	else
	{
		std::cout << "YOU WIN!";
	}

	return 0;
}