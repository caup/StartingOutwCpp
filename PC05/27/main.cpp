//Using Files--Population Bar Chart
#include <iostream>
#include <fstream>

int main()
{
	std::ifstream inputFile;
	int year, population;

	std::cout << "PRAIRIEVILLE POPULATION GROWTH\n";
	std::cout << "(each * represents 1000 people)\n";

	inputFile.open("Population.txt");

	for (int i = 1; i <= 12; i++)
	{
		if (i % 2 == 0)
		{
			inputFile >> population;

			for (int p = 0; p < population / 1000; p++)
			{
				std::cout << "*";
			}

			std::cout << std::endl;
		}
		else
		{
			inputFile >> year;

			std::cout << year << "  ";
		}
	}

	inputFile.close();

	return 0;

}