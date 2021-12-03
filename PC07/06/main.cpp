// Gratuity Calculator
#include <iostream>
#include <iomanip>
#include "Tips.h"

int main()
{
	Tips tip;

	double billTotal, tipRate;

	std::cout << std::fixed << std::setprecision(2);
	while (true)
	{
		std::cout << "Enter total bill: ";
		std::cin >> billTotal;
		if (billTotal == 0)
		{
			break;
		}
		std::cout << "Enter gratuity: ";
		std::cin >> tipRate;

		std::cout << "Gratuity: $" << tip.computeTip(billTotal, tipRate) << std::endl;
	}

	return 0;
}