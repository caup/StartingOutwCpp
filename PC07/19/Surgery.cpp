#include "Surgery.h"

Surgery::Surgery()
{
	charge = 0.0;
}

Surgery::~Surgery()
{
}

void Surgery::addSurgeryCharge(PatientAccount& acc)
{
	acc.addToCharges(charge);
}

void Surgery::getSurgery(int choice)
{
	if (choice == 1)
	{
		charge = 75000.0;
	}
	else if (choice == 2)
	{
		charge = 45000.0;
	}
	else
	{
		charge = 25000.0;
	}
}
