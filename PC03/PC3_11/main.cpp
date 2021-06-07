//How Many Widgets?
#include <iostream>

int main()
{
	const double WIDGET_WEIGHT = 12.5;

	double palletWeight, palletPlusWidgets;
	int numOfWidgets;

	std::cout << "How much does the pallet weigh by itself? ";
	std::cin >> palletWeight;
	std::cout << "How much does the pallet weigh with the widgets? ";
	std::cin >> palletPlusWidgets;

	numOfWidgets = (palletPlusWidgets - palletWeight) / WIDGET_WEIGHT;

	std::cout << "There are " << numOfWidgets << " widgets on the pallet.";

	return 0;
}