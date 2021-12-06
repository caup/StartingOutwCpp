//Stats Class and Track Statistics
#include <iostream>
#include <iomanip>
#include <string>
#include "Stats.h"

using std::string;

const int MAX = 15;

struct Runners
{
	string names[MAX];
	Stats time;
};

void getData(Runners& p);
void createReport(Runners p);

int main()
{
	Runners participants;

	getData(participants);
	createReport(participants);

	return 0;
}

void getData(Runners& p)
{
	for (int i = 0; i < MAX; i++)
	{
		double input;
		std::cout << "Enter the name of runner #" << i + 1 << ": ";
		std::cin >> p.names[i];
		std::cout << "Enter the time for runner #" << i + 1 << ": ";
		std::cin >> input;
		p.time.storeValue(input);
	}
}

void createReport(Runners p)
{
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "\n\n  Tulsa Tigers Track Team\n\n";
	std::cout << "Average 100 yard-dash time: " << p.time.average() << " seconds\n";
	std::cout << "Slowest runner: " << p.names[p.time.getNameLowest()] << std::setw(8) << p.time.lowest() << " seconds\n";
	std::cout << "Fastest runner: " << p.names[p.time.getNameHighest()] << std::setw(8) << p.time.highest() << " seconds\n";
}
