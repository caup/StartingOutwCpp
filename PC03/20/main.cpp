//Interest Earned
#include <iostream>
#include <iomanip>

int main()
{
	double principal, annualRate, xCompunded,
		interest, finalBalance;

	std::cout << "Enter the principal, followed by the annual interest rate, and times the interest is compounded" << std::endl;
	std::cin >> principal >> annualRate >> xCompunded;
	
	finalBalance = principal * pow((1 + annualRate / xCompunded), xCompunded);
	interest = finalBalance - principal;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Interest Rate:	" << std::setw(8) << annualRate << "%\n";
	std::cout << "Times Compounded: " << std::setw(8) << xCompunded << std::endl;
	std::cout << "Principal:	   $" << std::setw(8) << principal << std::endl;
	std::cout << "Interest:		   $" << std::setw(8) << interest << std::endl;
	std::cout << "Final Balance:   $" << std::setw(8) << finalBalance;

	return 0;
}