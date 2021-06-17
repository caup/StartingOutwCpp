//Miles Per Gallon
#include <iostream>

int main()
{
	int gallons, miles;
	
	std::cout << "Enter gallons: ";
	std::cin >> gallons;
	std::cout << "Enter miles: ";
	std::cin >> miles;

	int mpg = miles / gallons;

	std::cout << "MPG: " << mpg;

	return 0;
}