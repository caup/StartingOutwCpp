//The Speed of Sound in Gases
#include <iostream>

int main()
{
	const double CARB_DIOX = 258,
				 AIR = 331.5,
				 HELIUM = 972,
				 HYDROGEN = 1270;

	int selection;

	std::cout << "- Calculate the distance of a sound -\n"
			  << "	make a selection:\n"
			  << " 1. Carbon Dioxide\n"
			  << " 2. Air\n"
			  << " 3. Helium\n"
			  << " 4. Hydrogen\n"
			  << " 5. Quit\n";
	std::cin >> selection;

	if (selection >= 1 && selection <= 5)
	{
		double secondsOfTravel, distance;

		std::cout << "Enter the number of seconds the sound took to travel from it's source (0-30): ";
		std::cin >> secondsOfTravel;

		switch (selection)
		{
		case 1:
			distance = secondsOfTravel * CARB_DIOX;
			std::cout << "The sound was apprx " << distance << " meters away.";
			break;
		case 2:
			distance = secondsOfTravel * AIR;
			std::cout << "The sound was apprx " << distance << " meters away.";
			break;
		case 3:
			distance = secondsOfTravel * HELIUM;
			std::cout << "The sound was apprx " << distance << " meters away.";
			break;
		case 4:
			distance = secondsOfTravel * HYDROGEN;
			std::cout << "The sound was apprx " << distance << " meters away.";
			break;
		default:
			return 0;
			break;
		}
	}
	else
	{
		std::cout << "Invalid selection.";
	}

	return 0;
}