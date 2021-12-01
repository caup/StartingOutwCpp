// Falling Distance
#include <iostream>
#include <iomanip>

double fallingDistance(int t);

int main()
{
	for (int secs = 1; secs <= 10; secs++)
	{
		double distance = fallingDistance(secs);

		std::cout << std::fixed << std::setprecision(1);
		std::cout << "Distance fallen in " << secs << " seconds is " << distance << std::endl;
	}
}

double fallingDistance(int t)
{
	return 0.5 * 9.8 * pow(t, 2);
}
