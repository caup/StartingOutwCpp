// Shipping Charges
#include <iostream>
#include <iomanip>
#include <cmath>

const double T1 = 3.1,
			 T2 = 4.2,
			 T3 = 5.3,
			 T4 = 6.4;

double calculateCharge(double, double);

int main()
{
	double weight, distance, charge;

	do
	{
		std::cout << "Enter the weight of the package: ";
		std::cin >> weight;
		std::cout << "Enter the shipping distance: ";
		std::cin >> distance;

		charge = calculateCharge(weight, distance);

		std::cout << std::fixed << std::setprecision(2);
		std::cout << "The shipping charge is $" << charge << std::endl;

	} while (weight != 0);
}

double calculateCharge(double w, double d)
{
	double rate, charge;

	if (w <= 2)
	{
		rate = T1;
	}
	else if (w > 2 && w <= 6)
	{
		rate = T2;
	}
	else if (w > 6 && w <= 10)
	{
		rate = T3;
	}
	else
	{
		rate = T4;
	}

	charge = rate * (static_cast<int>(((d + 499.99) / 500)));

	return charge;
}
