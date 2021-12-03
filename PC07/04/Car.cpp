#include "Car.h"

int Car::getYear()
{
	return year;
}

int Car::getSpeed()
{
	return speed;
}

string Car::getMake()
{
	return make;
}

void Car::accelerate()
{
	speed += 5;
}

void Car::brake()
{
	speed -= 5;
}
