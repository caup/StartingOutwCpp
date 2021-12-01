// Markup
#include <iostream>
#include <iomanip>

double calculateRetail(double wSale, double mUp);

int main()
{
	double wholesale, markup, retail;

	std::cout << "Enter the item's wholesale cost: ";
	std::cin >> wholesale;
	std::cout << "Enter the item markup: ";
	std::cin >> markup;

	retail = calculateRetail(wholesale, markup);

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Retail price: $" << retail;

	return 0;
}

double calculateRetail(double wSale, double mUp)
{
	return wSale + wSale * (mUp / 100);
}
