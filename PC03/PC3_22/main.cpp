//Pizza Slices
#include <iostream>
#include <iomanip>

int main()
{
	const double PI = 3.14,
		SLICE = 14.125;

	int numSlices;
	double pDiameter, pRadius, pArea;

	std::cout << "What is the diameter of the pizza? ";
	std::cin >> pDiameter;

	pRadius = pDiameter / 2;
	pArea = PI * pow(pRadius, 2);
	numSlices = pArea / SLICE;

	std::cout << "The number of slices in the pizza is " << numSlices;

	return 0;
}