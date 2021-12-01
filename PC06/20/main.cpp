// Travel Expenses Group Project
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using std::string;

int TripDates(int& start, int& end, string& month);
double hotelExpense(int days);
double travelExpense();
double miscExpense();
double calcTotal(double hotel, double travel, double misc);

int main()
{
	std::ofstream outputFile;
	string month;
	int tripStartDay, tripEndDay, tripDays;
	double total, hotelTotal, travelTotal, miscTotal;

	tripDays = TripDates(tripStartDay, tripEndDay, month);
	hotelTotal = hotelExpense(tripDays);
	travelTotal = travelExpense();
	miscTotal = miscExpense();
	
	total = calcTotal(hotelTotal, travelTotal, miscTotal);

	outputFile.open("TravelExpenses.txt");

	outputFile << std::fixed << std::setprecision(2);
	outputFile << "Travel Expense Report:\n"
		<< "----------------------\n"
		<< month << " " << tripStartDay << " - " << tripEndDay << '\n'
		<< "# of days: " << tripDays << '\n'
		<< std::setw(6) << "Hotel" << std::setw(11) << "Travel" << std::setw(13) << "Misc\n"
		<< "$" << std::setw(6) << hotelTotal << std::setw(5) << "$" << travelTotal << std::setw(5) << "$" << miscTotal
		<< "\nTotal Expense: $" << total << std::endl;

	return 0;
}

int TripDates(int& start, int& end, string& month)
{
	std::cout << "Month of the trip: ";
	std::cin >> month;
	std::cout << "Start day: ";
	std::cin >> start;
	std::cout << "End day: ";
	std::cin >> end;

	return end - start;
}

double hotelExpense(int days)
{
	double cost;

	std::cout << "Nightly hotel expense: ";
	std::cin >> cost;

	if (cost  > 120)
	{
		std::cout << "The company will cover $120 per night.\n";
		cost = 120;
	}

	return days * cost;
}

double travelExpense()
{
	char choice;
	int miles = 0;
	double airfare, rentalCar, mileAllowance;

	std::cout << "Cost of airfare? ";
	std::cin >> airfare;
	std::cout << "Cost of car rentals: ";
	std::cin >> rentalCar;

	do
	{
		std::cout << "Did you use a personal vehicle? (Y/N): ";
		std::cin >> choice;
		choice = toupper(choice);

	} while (!(choice == 'Y' || choice == 'N'));

	if (choice == 'Y')
	{
		std::cout << "How many miles were driven? ";
		std::cin >> miles;
	}

	mileAllowance = miles * 0.58;

	return airfare + rentalCar + mileAllowance;
}

double miscExpense()
{
	double parkingFees, TaxiFees, mealCosts;

	std::cout << "Enter any parking fees: ";
	std::cin >> parkingFees;
	std::cout << "Enter any taxi fees: ";
	std::cin >> TaxiFees;
	std::cout << "Enter meal costs: ";
	std::cin >> mealCosts;

	return parkingFees + TaxiFees + mealCosts;
}

double calcTotal(double hotel, double travel, double misc)
{
	return hotel + travel + misc;
}
