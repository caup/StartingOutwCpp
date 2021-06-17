//Celsius to Fahrenheit Table
#include <iostream>
#include <iomanip>

int main()
{
	std::cout << "Celsius	Fahrenheit\n";

	for (double c = 0; c <= 30; c++)
	{
		double f = 1.8 * c + 32;

		std::cout << std::setw(4) << c << std::setw(10) << f << std::endl;
	}

	return 0;
}