// Soccer Points
#include <iostream>
#include <Windows.h>
#include "teamScore.h"

int Menu()
{
	int answer;
	do
	{
		std::cout << std::endl <<
			"1. Increment wins\n" <<
			"2. Increment losses\n" <<
			"3. Increment ties\n" <<
			"4. Display record\n\n" <<
			"5. Exit" << std::endl;
		std::cin >> answer;

		if (answer < 1 || answer > 5)
		{
			std::cout << "Invalid input\n";
		}
	} while (answer < 1 || answer > 5);

	return answer;
}

int main()
{
	int choice;
	teamScore team{ "Mavericks" };

	do
	{
		choice = Menu();

		switch (choice)
		{
		case 1:
			team.updateWins();
			break;
		case 2:
			team.updateLosses();
			break;
		case 3:
			team.updateTies();
			break;
		case 4:
			team.displayRecord();
			break;
		default:
			break;
		}

	} while (choice != 5);
}