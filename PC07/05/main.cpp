// Population
#include <iostream>
#include "Population.h"

int main()
{
	Population poprate;

	poprate.setPopulation();
	poprate.setBirths();
	poprate.setDeaths();

	std::cout << "\nBirth rate: " << poprate.getBirthRate();
	std::cout << "\nDeath rate: " << poprate.getDeathRate() << std::endl;

	return 0;
}