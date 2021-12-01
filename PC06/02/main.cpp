// Celsius Temperature Table
#include <iostream>
#include <iomanip>

double celsius(double f);

int main()
{
	double cTemp;

	std::cout << std::fixed << std::setprecision(1);

	for (int fTemp = 0; fTemp <= 100; fTemp += 5)
	{
		cTemp = celsius(fTemp);
		
		std::cout << fTemp << "F is " << cTemp << "C\n";
	}

	return 0;
}

double celsius(double f)
{
	return 0.55555 * (f - 32);
}
