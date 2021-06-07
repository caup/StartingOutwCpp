//How Much Insurance?
#include <iostream>
#include <iomanip>

int main()
{
	const double INSURANCE_REC = 0.8;
	double replacementCost, minAmount;

	std::cout << "Enter the replacement cost of the building: ";
	std::cin >> replacementCost;

	minAmount = replacementCost * INSURANCE_REC;

	std::cout << "The minimum recommended insurance for your property is $" << std::fixed << std::setprecision(2) << minAmount;

	return 0;
}