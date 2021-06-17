//Speed Conversion Chart
#include <iostream>
#include <iomanip>

int main()
{
	std::cout << " kph   mph\n";

	for (int kph = 40; kph <= 120; kph += 10)
	{
		int mph = kph * 0.6214;
		
		std::cout << std::setw(3) << kph << std::setw(7) << mph << std::endl;
	}

	return 0;
}