// Patient Fees Group Project
#include <iostream>
#include "PatientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"

void createMenu(Surgery&, Pharmacy&, PatientAccount&);

int main()
{
	PatientAccount account;
	Surgery surgeries;
	Pharmacy meds;
	
	createMenu(surgeries, meds, account);
}

void createMenu(Surgery& surg, Pharmacy& pharm, PatientAccount& acc)
{
	std::cout << "1. Brain surgery\n"
			  << "2. Back surgery\n"
			  << "3. Toe surgery\n";
	int choice;
	std::cin >> choice;
	surg.getSurgery(choice);

	system("cls");

	std::cout << "1. Super Male Vitality\n"
			  << "2. Tylenol\n"
			  << "3. Vicodin\n";
	std::cin >> choice;
	pharm.getPharmacy(choice);

	system("cls");

	std::cout << "How many days were spent in the hospital? ";
	std::cin >> choice;
	acc.calcDaysCharge(choice);

	system("cls");

	std::cout << "Total charges: $" << acc.getCharges();
}
