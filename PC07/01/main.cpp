// Date
#include "Date.h"

int main()
{
	int month, day, year;
	Date today;

	std::cout << "Month: ";
	std::cin >> month;
	today.setMonth(month);
	std::cout << "Day: ";
	std::cin >> day;
	today.setDay(day);
	std::cout << "Year: ";
	std::cin >> year;
	today.setYear(year);

	today.printCasual();
	today.printFormal();
	today.printEuro();

	return 0;
}