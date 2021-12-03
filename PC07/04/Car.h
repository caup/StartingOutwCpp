#pragma once
#include <string>

using std::string;

class Car
{
public:
	Car(int yr, string mk, int spd);
	~Car();

	int getYear();
	int getSpeed();
	string getMake();

	void accelerate();
	void brake();

private:
	int year;
	int speed;
	string make;
};

inline Car::Car(int yr = 2010, string mk = "Honda", int spd = 0)
{
	year = yr;
	make = mk;
	speed = spd;
}

inline Car::~Car()
{
}

