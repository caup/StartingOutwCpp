//How Many Pizzas?
#include <iostream>
#include <iomanip>

int main()
{
	const double PI = 3.14,
		SLICE = 14.125,
		EATEN = 4;

	int numSlices, numPizzas, numPpl;
	double pDiameter, pRadius, pArea;

	std::cout << "What is the diameter of the pizza(s)? ";
	std::cin >> pDiameter;
	std::cout << "How many people will there be? ";
	std::cin >> numPpl;

	pRadius = pDiameter / 2;
	pArea = PI * pow(pRadius, 2);
	numSlices = pArea / SLICE;
	numPizzas = (numPpl * 4) / numSlices;

	std::cout << "The number of slices in the pizza(s) is " << numSlices << std::endl;
	std::cout << "The number of pizzas needed is " << numPizzas;

	return 0;
}