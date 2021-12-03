// Car Class
#include <iostream>
#include "Car.h"

int main()
{
	Car vehicle;

	for (int i = 0; i < 5; i++)
	{
		vehicle.accelerate();
		std::cout << vehicle.getSpeed() << '\n';
	}
	
	for (int i = 0; i < 5; i++)
	{
		vehicle.brake();
		std::cout << vehicle.getSpeed() << '\n';
	}

	return 0;
}