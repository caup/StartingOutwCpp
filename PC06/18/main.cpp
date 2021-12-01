// Population
#include <iostream>

int calcPopGrowth(int p, double b, double d);

int main()
{
	int startSize, newSize, years;
	double birthRate, deathRate;

	do
	{
		std::cout << "Population start size: ";
		std::cin >> startSize;

	} while (startSize < 2);

	std::cout << "Annual birth rate: ";
	std::cin >> birthRate;
	std::cout << "Annual death rate: ";
	std::cin >> deathRate;
	
	do
	{
		std::cout << "Number of years to display: ";
		std::cin >> years;

	} while (years < 1);

	for (int i = 1; i <= years; i++)
	{
		newSize = calcPopGrowth(startSize, birthRate, deathRate);

		std::cout << "Year: " << i << "  Population: " << newSize << '\n';
	}
}

int calcPopGrowth(int p, double b, double d)
{
	b /= 1000;
	d /= 1000;
	static int newPop = p * (1 + b) * (1 - d);
	return newPop;
}
