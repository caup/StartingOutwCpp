//How Much Paint
#include <iostream>

int main()
{
	double gallonCoverage = 340,
		fenceSqFt = 2400,
		paintNeeded = fenceSqFt / gallonCoverage;

	std::cout << "Gallons of paint needed: " << paintNeeded;
}