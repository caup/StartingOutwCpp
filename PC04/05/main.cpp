//Book Club Points
#include <iostream>

int main()
{
	int booksPurchased;

	std::cout << "Enter number of books purchased this month: ";
	std::cin >> booksPurchased;

	switch (booksPurchased)
	{
	case 0:
		std::cout << "Points Earned: 0";
		break;
	case 1:
		std::cout << "Points Earned: 5";
			break;
	case 2:
		std::cout << "Points Earned: 15";
		break;
	case 3:
		std::cout << "Points Earned: 30";
		break;
	default:
		std::cout << "Points Earned: 50";
		break;
	}

	return 0;
}