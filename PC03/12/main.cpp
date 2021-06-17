//How many Calories?
#include <iostream>
#include <iomanip>

int main()
{
	const int SERVING_SIZE = 3,
		SERVING_CALS = 240;

	double cookiesAte, totalCals;

	std::cout << "How many cookies did you eat? ";
	std::cin >> cookiesAte;

	totalCals = cookiesAte / SERVING_SIZE * SERVING_CALS;

	std::cout << "Total calories consumed: " << totalCals;

	return 0;
}