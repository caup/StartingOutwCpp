//Future Ocean Levels
#include <iostream>

int main()
{
	double oceanRate = 3.3 * 15,
		ORcntmr = oceanRate * 0.1,
		ORinches = ORcntmr * 0.3937;

	std::cout << "Over the next 15 years the ocean will rise " << ORcntmr << " centimeters and " << ORinches << " inches.";
}