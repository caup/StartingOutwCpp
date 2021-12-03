#include "Population.h"
#include <iostream>

Population::Population(int pop, int births, int deaths)
{
	population = pop;
	annualBirths = births;
	annualDeaths = deaths;
}

void Population::setPopulation()
{
	int p;

	std::cout << "Enter the starting population: ";
	std::cin >> p;

	if (p > 2)
	{
		population = p;
	}
	else
	{
		population = 2;
	}
}

void Population::setBirths()
{
	int b;

	std::cout << "Enter the annual births: ";
	std::cin >> b;

	if (b > 0)
	{
		annualBirths = b;
	}
	else
	{
		annualBirths = 0;
	}
}

void Population::setDeaths()
{
	int d;
	
	std::cout << "Enter the annual deaths: ";
	std::cin >> d;

	if (d > 0)
	{
		annualDeaths = d;
	}
	else
	{
		annualDeaths = 0;
	}
}

double Population::getBirthRate()
{
	return annualBirths / static_cast<double>(population);
}

double Population::getDeathRate()
{
	return annualDeaths / static_cast<double>(population);
}
