//Batting Average
#include <iostream>
#include <iomanip>

int main()
{
	double timesAtBat, hitsEarned, bAvg;

	std::cout << "How many times was the player at bat? ";
	std::cin >> timesAtBat;
	std::cout << "Number of hits earned? ";
	std::cin >> hitsEarned;

	bAvg = hitsEarned / timesAtBat;

	std::cout << std::showpoint << std::fixed << std::setprecision(3);
	std::cout << "Batting average: " << bAvg;

	return 0;
}