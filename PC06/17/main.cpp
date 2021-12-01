// Using Files--Overloaded Hospital
#include <iostream>
#include <fstream>
#include <iomanip>

void validateInput(double& num);
double calcCharges(int days, double dayRate, double servCharge, double medCharge);
double calcCharges(double servCharge, double medCharge);

int main()
{
	int choice;

	do
	{
		std::cout << "1. Inpatient\n"
			<< "2. Outpatient\n";
		std::cin >> choice;


	} while (!((choice == 1) || (choice == 2)));

	if (choice == 1)
	{
		double days, dailyRate, serviceCharge, medCharges,
			total;

		std::cout << "Number of days spent in the hospital: ";
		validateInput(days);
		std::cout << "Daily rate: ";
		validateInput(dailyRate);
		std::cout << "Hospital service charges: ";
		validateInput(serviceCharge);
		std::cout << "Medication charges: ";
		validateInput(medCharges);

		total = calcCharges(days, dailyRate, serviceCharge, medCharges);

		std::ofstream outputFile("HospitalReport.txt");

		outputFile << std::fixed << std::setprecision(2);
		outputFile << "Total charge: $" << total << std::endl;

		outputFile.close();
	}

	if (choice == 2)
	{
		double serviceCharge, medCharges,
			total;

		std::cout << "Hospital service charges: ";
		validateInput(serviceCharge);
		std::cout << "Medication charges: ";
		validateInput(medCharges);

		total = calcCharges(serviceCharge, medCharges);

		std::ofstream outputFile("HospitalReport.txt");

		outputFile << std::fixed << std::setprecision(2);
		outputFile << "Total charge: $" << total << std::endl;

		outputFile.close();
	}

	return 0;
}

void validateInput(double& num)
{
	while (!(std::cin >> num) || num < 0)
	{
		std::cout << "The input must not be less than 0.\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

double calcCharges(int days, double dayRate, double servCharge, double medCharge)
{
	return (days * dayRate) + servCharge + medCharge;
}

double calcCharges(double servCharge, double medCharge)
{
	return servCharge + medCharge;
}
