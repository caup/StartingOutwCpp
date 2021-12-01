// Most Fuel Efficient Car
#include <iostream>
#include <string>

using std::string;

const int MILES_DRIVEN = 500;

double calcMPG(int, double);

int main()
{
	string make[3], bestMake;
	double gallonsUsed[3], mpg[3];

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Enter the make of the car: ";
		std::cin >> make[i];
		std::cout << "Enter the number of gallons used: ";
		std::cin >> gallonsUsed[i];

		mpg[i] = calcMPG(MILES_DRIVEN, gallonsUsed[i]);
	}

	double bestMPG = 0;
	int count = 0;

	while (count < 3)
	{
		if (mpg[count] > bestMPG)
		{
			bestMPG = mpg[count];
			bestMake = make[count];
		}

		count++;
	}

	std::cout << "The best make was " << bestMake << " with " << bestMPG << " MPG.\n";

	return 0;
}

double calcMPG(int milesDriven, double gUsed)
{
	return milesDriven / gUsed;
}
