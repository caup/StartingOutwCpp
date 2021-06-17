//Hotel Suites Occupancy
#include <iostream>

int main()
{
	int totalSuites = 120,
		occupiedSuites = 0,
		inputSuites,
		percentOccupied;

	for (int f = 10; f <= 16; f++)
	{
		if (f == 13)
		{
			std::cout << "No 13th floor.\n";
			continue;
		}

		do
		{
			std::cout << "Enter the number of occupied suites on floor #" << f << ": ";
			std::cin >> inputSuites;

		} while (inputSuites < 0 || inputSuites > 20);

		occupiedSuites += inputSuites;
	}

	percentOccupied = static_cast<double>(occupiedSuites) / static_cast<double>(totalSuites) * 100;

	std::cout << "Total suites:     " << totalSuites << std::endl
		<< "Occupied suites:  " << occupiedSuites << std::endl
		<< "Percent occupied: " << percentOccupied << "%";

	return 0;
}