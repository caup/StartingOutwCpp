//Software Sales
#include <iostream>
#include <iomanip>

int main()
{
	const double PACKAGE_PRICE = 199;

	int unitsPurchased;
	double discount;

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout << "Enter the number of software packages purchased: ";
	std::cin >> unitsPurchased;

	if (unitsPurchased > 0)
	{
		if (unitsPurchased < 10)
		{
			std::cout << "Total sale: $" << unitsPurchased * PACKAGE_PRICE;
		}
		else if (unitsPurchased < 20)
		{
			discount = 0.8;
			std::cout << "Total sale: $" << unitsPurchased * (PACKAGE_PRICE * discount);
		}
		else if (unitsPurchased < 50)
		{
			discount = 0.7;
			std::cout << "Total sale: $" << unitsPurchased * (PACKAGE_PRICE * discount);
		}
		else if (unitsPurchased < 99)
		{
			discount = 0.6;
			std::cout << "Total sale: $" << unitsPurchased * (PACKAGE_PRICE * discount);
		}
		else
		{
			discount = 0.5;
			std::cout << "Total sale: $" << unitsPurchased * (PACKAGE_PRICE * discount);
		}
	}
	else
	{
		std::cout << "No units sold!";
	}

	return 0;
}