//Land Calculation
#include <iostream>

int main()
{
	double sqFeet = 12 * 43560,
		   sqMeter = (12 * 43560) / 10.7639;

	std::cout << "Square Feet in 12 acres: " << sqFeet << std::endl;
	std::cout << "Squre Meters in 12 acres: " << sqMeter;

	return 0;
}