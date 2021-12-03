#include "Pharmacy.h"

Pharmacy::Pharmacy()
{
	charge = 0.0;
}

Pharmacy::~Pharmacy()
{
}

void Pharmacy::addPharmacyCharge(PatientAccount& acc)
{
	acc.addToCharges(charge);
}

void Pharmacy::getPharmacy(int choice)
{
	if (choice == 1)
	{
		charge = 750.0;
	}
	else if (choice == 2)
	{
		charge = 333.0;
	}
	else
	{
		charge = 175.0;
	}
}
