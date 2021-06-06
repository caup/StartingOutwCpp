//Sales Tax
#include <iostream>

int main()
{
	double purchasePrice = 95,
		totalTax = purchasePrice * 0.085;

	std::cout << "Subtotal:  " << purchasePrice << std::endl;
	std::cout << "Total tax: " << totalTax  << std::endl;
	std::cout << "Total:     " << purchasePrice + totalTax;

	return 0;
}