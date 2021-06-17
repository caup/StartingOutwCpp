//Planting Grapevines
#include <iostream>

int main()
{
	int numGrapevines;

	double rowLength, endPostLength, spaceBtwnVines;

	std::cout << "Enter the row length. end-post length, and space between vines: " << std::endl;
	std::cin >> rowLength >> endPostLength >> spaceBtwnVines;

	numGrapevines = (rowLength - 2 * endPostLength) / spaceBtwnVines;

	std::cout << "The number of grapevines per row: " << numGrapevines;

	return 0;
}