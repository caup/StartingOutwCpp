//Distance Traveled
#include <iostream>
#include <iomanip>

int main()
{
	int speed, hours, distance;

	std::cout << "What is the speed of the vehicle? ";
	std::cin >> speed;
	std::cout << "How many hours has it traveled? ";
	std::cin >> hours;

	std::cout << "\nHour       Miles Traveled\n"
			  << "-------------------------\n";

	for (int i = 1; i <= hours; i++)
	{
		distance = i * speed;
		std::cout << std::setw(2) << i << std::setw(16) << distance << std::endl;
	}

	return 0;
}