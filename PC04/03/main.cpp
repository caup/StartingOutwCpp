//Magic Dates
#include <iostream>

int main()
{
	int month, day, year;

	std::cout << "Enter a month: ";
	std::cin >> month;
	std::cout << "Enter a day: ";
	std::cin >> day;
	std::cout << "Enter a two-digit year: ";
	std::cin >> year;

	if (month <= 12 && day <= 31 && year <= 99)
	{
		if (month * day == year)
		{
			std::cout << "The date is magic!";
		}
		else
		{
			std::cout << "The date is not magic. :(";
		}
	}
	else
	{
		std::cout << "Invalid input.";
	}

	return 0;
}