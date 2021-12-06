// Stats Class and Rainfall Statistics
#include <iostream>
#include <iomanip>
#include "Stats.h"

int main()
{
	Stats rainfall;

	double input;
	int day = 0;
	std::cout << "Enter 30 rainfall values. Enter 99 to continue early.\n";
	do
	{
		std::cout << day + 1 << ": ";
		std::cin >> input;
		day++;
		if (input == 99)
		{
			continue;
		}
		if (!rainfall.storeValue(input))
		{
			break;
		}
	} while (input != 99);

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "\n\n  2021 Rain Report for Springdale County\n\n";
	std::cout << "Total rainfall: " << rainfall.total() << " inches\n";
	std::cout << "Average monthly rainfall: " << rainfall.average() << " inches\n";
	std::cout << "Least rainfall " << rainfall.lowest() << " inches\n";
	std::cout << "Most rainfall " << rainfall.highest() << " inches\n";

	return 0;
}