//Pennies for Pay
#include <iostream>
#include <iomanip>

int main()
{
	int daysWorked;
	do
	{
		std::cout << "Enter the number of days worked: ";
		std::cin >> daysWorked;
	} while (daysWorked < 1 || daysWorked > 31);

	std::cout << "Day    Earned\n";
	std::cout << std::fixed << std::setprecision(2);

	double pEarned = 0.01,
		total = 0;
	for (int d = 1; d <= daysWorked; d++)
	{
			std::cout << std::setw(3) << d << std::setw(10) << pEarned << std::endl;
			pEarned += pEarned;
			total += pEarned;
	}

	std::cout << "Total: $" << total;

	return 0;
}