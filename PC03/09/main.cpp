//Vacation Days
#include <iostream>

int main()
{
	int vactionDays, hours, mins, secs;
	
	std::cout << "How many days will your next vaction be? ";
	std::cin >> vactionDays;

	hours = vactionDays * 24;
	mins = hours * 60;
	secs = mins * 60;

	std::cout << "That is " << hours << " hours, " << mins << " minutes, and " << secs << " seconds.";

	return 0;
}