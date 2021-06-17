//Distance per Tank of Gas
#include <iostream>

int main()
{
	double town = 23.5,
		highway = 28.9;
	int tank = 20;

	std::cout << "Town MPG: " << town * tank << std::endl;
	std::cout << "Highway MPG: " << highway * tank;

	return 0;
}