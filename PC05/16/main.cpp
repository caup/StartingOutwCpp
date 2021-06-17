//Rate of Inflation
#include <iostream>
#include <iomanip>

int main()
{
	double rate, value = 1000;
	
	do
	{
		std::cout << "Enter an annual inflation rate between 1 and 10 percent: ";
		std::cin >> rate;

		if (rate < 1 || rate > 10)
		{
			std::cout << "Only values between 1 and 10 are accepted!\n";
		}

	} while (rate < 1 || rate > 10);

	std::cout << "Value of $1000 over the next 10 years:\n"
			  << "--------------------------------------\n";

	for (int i = 1; i <= 10; i++)
	{
		value -= value * (rate / 100);
		
		std::cout << std::fixed << std::setprecision(2);
		std::cout << "Year" << std::setw(10) << i << std::setw(18) << '$' << value << std::endl;
	}

	return 0;
}