//Monthly Sales Tax
#include <iostream>
#include <iomanip>
#include <string>

using std::string;

int main()
{
	const double STATE_TAX = 0.06,
				 COUNTY_TAX = 0.02;

	string monthAndYear;
	string border;

	double totalCollected, sales, countyTax, stateTax, totalTax;

	std::cout << "Enter month and year (MONTH YEAR): ";
	std::getline(std::cin, monthAndYear);
	std::cout << "Enter the total collected: ";
	std::cin >> totalCollected;

	sales = totalCollected / 1.06;
	countyTax = sales * COUNTY_TAX;
	stateTax = sales * STATE_TAX;
	totalTax = countyTax + stateTax;

	int size = monthAndYear.length();
	border.assign(size, '-');

	std::cout << monthAndYear << std::endl << border << std::endl;
	std::cout << std::showpoint << std::fixed << std::setprecision(2);
	std::cout << "Total Collected: " << std::setw(5) << "$ " << totalCollected << std::endl;
	std::cout << "Sales: " << std::setw(15) << "$ " << sales << std::endl;
	std::cout << "County Sales Tax: " << std::setw(4) << "$ " << countyTax << std::endl;
	std::cout << "State Sales Tax: " << std::setw(5) << "$ " << stateTax << std::endl;
	std::cout << "Total Sales Tax: " << std::setw(5) << "$ " << totalTax << std::endl;

	return 0;
}