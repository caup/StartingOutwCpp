//Past Ocean Levels
#include <iostream>

int main()
{
	double oceanLevelRate = 1.8 * 100,
		OLRcntmr = oceanLevelRate * 0.1,
		OLRinches = OLRcntmr * 0.3937;

	std::cout << "Over the past century the ocean level has risen " << OLRcntmr << " centimeters and " << OLRinches << " inches.";
}