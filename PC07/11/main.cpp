// Month Budget Screen Form
#include <iostream>
#include <iomanip>
#include <Windows.h>

struct MonthlyBudget
{
	double housing,
		utilities,
		household,
		transportation,
		food,
		medical,
		insurance,
		entertainment,
		clothing,
		misc;
};

void moveCursor(HANDLE, int, int);
void displayPrompt(MonthlyBudget);
void getUserData(HANDLE, MonthlyBudget&);
void displayResults(HANDLE, MonthlyBudget, MonthlyBudget);

int main()
{
	MonthlyBudget budget{ 1200.0, 215.0, 65.0, 50.0, 250.0, 30.0, 100.0, 120.0, 75.0, 50.0 },
				  expense{};

	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	displayPrompt(budget);
	getUserData(screen, expense);
	displayResults(screen, budget, expense);
	moveCursor(screen, 0, 13);

	return 0;
}

void moveCursor(HANDLE screen, int x, int y)
{
	COORD position;
	position.X = x;
	position.Y = y;

	SetConsoleCursorPosition(screen, position);
}

void displayPrompt(MonthlyBudget b)
{
	std::cout << std::fixed << std::setprecision(2)
		<< std::setw(38) << "Budget:" << std::setw(12) << "Expense:\n"
		<< "Housing" << std::setw(24) << "$" << b.housing
		<< "\nUtilities, Internet & Phone" << std::setw(4) << "$" << b.utilities
		<< "\nHousehold expenses" << std::setw(13) << "$" << b.household
		<< "\nTransportation" << std::setw(17) << "$" << b.transportation
		<< "\nFood" << std::setw(27) << "$" << b.food
		<< "\nMedical" << std::setw(24) << "$" << b.medical
		<< "\nInsurance" << std::setw(22) << "$" << b.insurance
		<< "\nEntertainment" << std::setw(18) << "$" << b.entertainment
		<< "\nClothing" << std::setw(23) << "$" << b.clothing
		<< "\nMiscellaneous" << std::setw(18) <<  "$" << b.misc
		<< std::endl;
}

void getUserData(HANDLE screen, MonthlyBudget& expense)
{
	moveCursor(screen, 41, 1);
	std::cin >> expense.housing;
	moveCursor(screen, 41, 2);
	std::cin >> expense.utilities;
	moveCursor(screen, 41, 3);
	std::cin >> expense.household;
	moveCursor(screen, 41, 4);
	std::cin >> expense.transportation;
	moveCursor(screen, 41, 5);
	std::cin >> expense.food;
	moveCursor(screen, 41, 6);
	std::cin >> expense.medical;
	moveCursor(screen, 41, 7);
	std::cin >> expense.insurance;
	moveCursor(screen, 41, 8);
	std::cin >> expense.entertainment;
	moveCursor(screen, 41, 9);
	std::cin >> expense.clothing;
	moveCursor(screen, 41, 10);
	std::cin >> expense.misc;
}

void displayResults(HANDLE screen, MonthlyBudget budget, MonthlyBudget expense)
{
	moveCursor(screen, 53, 1);
	std::cout << budget.housing - expense.housing;
	moveCursor(screen, 53, 2);
	std::cout << budget.utilities - expense.utilities;
	moveCursor(screen, 53, 3);
	std::cout << budget.household - expense.household;
	moveCursor(screen, 53, 4);
	std::cout << budget.transportation - expense.transportation;
	moveCursor(screen, 53, 5);
	std::cout << budget.food - expense.food;
	moveCursor(screen, 53, 6);
	std::cout << budget.medical - expense.medical;
	moveCursor(screen, 53, 7);
	std::cout << budget.insurance - expense.insurance;
	moveCursor(screen, 53, 8);
	std::cout << budget.entertainment - expense.entertainment;
	moveCursor(screen, 53, 9);
	std::cout << budget.clothing - expense.clothing;
	moveCursor(screen, 53, 10);
	std::cout << budget.misc - expense.misc;

	moveCursor(screen, 65, 5);
	std::cout << "Over/Under: " << (budget.housing + budget.utilities + budget.household + budget.transportation + budget.food + budget.medical
		+ budget.insurance + budget.entertainment + budget.clothing + budget.misc) - (expense.housing + expense.utilities
			+ expense.household + expense.transportation + expense.food + expense.medical + expense.insurance
			+ expense.entertainment + expense.clothing + expense.misc);
}
