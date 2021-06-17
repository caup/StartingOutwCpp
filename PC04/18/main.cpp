//The Speed of Sound
#include <iostream>
#include <iomanip>

int main()
{
	const double AIR = 1100,
				 WATER = 4900,
				 STEEL = 16400;

	int selection;

	std::cout << "- Calculate the speed of sound -\n"
			  << "	select from the medium below:\n"
			  << " 1. Air\n"
			  << " 2. Water\n"
			  << " 3. Steel\n"
			  << " 4. Quit\n";
	std::cin >> selection;
	std::cout << std::fixed << std::setprecision(4);

	if (selection >= 1 && selection <= 4)
	{
		double distTraveled, travelTime;

		std::cout << "Enter distance traveled in feet: ";
		std::cin >> distTraveled;

		switch (selection)
		{
		case 1:
			travelTime = distTraveled / AIR;
			std::cout << "It will take " << travelTime << " seconds to travel " << distTraveled << "ft through air.";
			break;
		case 2:
			travelTime = distTraveled / WATER;
			std::cout << "It will take " << travelTime << " seconds to travel " << distTraveled << "ft through water.";
			break;
		case 3:
			travelTime = distTraveled / STEEL;
			std::cout << "It will take " << travelTime << " seconds to travel " << distTraveled << "ft through steel.";
			break;
		default:
			return 0;
		}
	}
	else
	{
		std::cout << "Invalid input.";
	}

	return 0;
}