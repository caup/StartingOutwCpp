//Membership Fees Increase
#include <iostream>
#include <iomanip>

int main()
{
	const double RATE = 0.03;

	double price = 3000;

	for (int i = 1; i <= 5; i++)
	{
		price += price * RATE;
		
		std::cout << std::fixed << std::setprecision(2);
		std::cout << i << "    $" << price << std::endl;
	}
}