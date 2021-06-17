//Housing Costs
#include <iostream>
#include <iomanip>

int main()
{
	double rent, phones, internet, cable,
		monthlyTotal, annualTotal;

	std::cout << "How much is your rent? ";
	std::cin >> rent;
	std::cout << "How much is your phone bill? ";
	std::cin >> phones;
	std::cout << "How much is your internet bill? ";
	std::cin >> internet;
	std::cout << "How much is your cable bill? ";
	std::cin >> cable;

	monthlyTotal = rent + phones + internet + cable;
	annualTotal = monthlyTotal * 12;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Monthly cost $" << std::setw(7) << monthlyTotal << std::endl;
	std::cout << "Annual cost  $" << std::setw(7) << annualTotal;

	return 0;
}