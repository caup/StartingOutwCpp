//Energy Drink Consumption
#include <iostream>

int main()
{
	int eDrinkBuyer = 16500 * 0.15,
		citrusBuyer = eDrinkBuyer * 0.52;

	std::cout << "Approximately " << eDrinkBuyer << " customers purchase at least one energy drink per week.\n";
	std::cout << "Of those, approximately " << citrusBuyer << " customers purchase a citrus energy drink.\n";

}