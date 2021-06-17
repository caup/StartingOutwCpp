//Senior Citizen Property Tax
#include <iostream>
#include <iomanip>

int main()
{
	const double SENIOR_DISCOUNT = 5000;
	double value, assessedValue, taxRate, totalTax, qtrlyTax;

	std::cout << "What is the value of the property? ";
	std::cin >> value;
	std::cout << "What is the current tax rate? ";
	std::cin >> taxRate;

	assessedValue = value * 0.6 - SENIOR_DISCOUNT;
	totalTax = (assessedValue / 100) * taxRate;
	qtrlyTax = totalTax / 4;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Total annual tax: $" << totalTax << std::endl;
	std::cout << "Quarterly tax:	$" << qtrlyTax;

	return 0;
}