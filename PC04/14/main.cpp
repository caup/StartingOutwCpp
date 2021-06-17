//February Days
#include <iostream>

int main()
{
	int year;

	std::cout << "Enter a year to determine if it's a leap year: ";
	std::cin >> year;

	if (year % 100 == 0 && year % 400 == 0)
	{
		std::cout << "In " << year << " February has 29 days.";
	}
	else if (year % 4 == 0)
	{
		std::cout << "In " << year << " February has 29 days.";
	}
	else
	{
		std::cout << "In " << year << " February has 28 days.";
	}

	return 0;
}