//Property Tax
#include <iostream>
#include <iomanip>

int main()
{
	double value, assessedValue, taxRate, annualTax;

	std::cout << "Enter the value of the property: ";
	std::cin >> value;
	std::cout << "Enter the current tax rate: ";
	std::cin >> taxRate;

	assessedValue = value * 0.6;
	annualTax = (assessedValue / 100) * taxRate;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "The annual property tax will be $" << annualTax;

	return 0;
}