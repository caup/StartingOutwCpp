//Next Leap Year
#include <iostream>

int main()
{
	int year;

	std::cout << "Enter a year to dermine if it is a leap year,\nif it isn't then the next one will be printed.\n";
	std::cin >> year;

	if (year % 100 == 0 && year % 400 == 0)
	{
		std::cout << year << " is a leap year.";
	}
	else if (year % 4 == 0)
	{
		std::cout << year << " is a leap year.";

	}
	else if (year % 4 == 3)
	{
		year += 1;
		std::cout << year << " is the next leap year.";
	}
	else if (year % 4 == 2)
	{
		year += 2;
		std::cout << year << " is the next leap year.";
	}
	else if (year % 4 == 1)
	{
		year += 3;
		std::cout << year << " is the next leap year.";
	}

	return 0;
}