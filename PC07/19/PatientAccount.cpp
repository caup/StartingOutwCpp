#include "PatientAccount.h"

PatientAccount::PatientAccount()
{
	charges = 0.0;
	dailyRate = 275.0;
}

PatientAccount::~PatientAccount()
{
}

void PatientAccount::calcDaysCharge(int d)
{
	charges += dailyRate * d;
}

double PatientAccount::getCharges()
{
	return charges;
}

void PatientAccount::addToCharges(double charge)
{
	charges += charge;
}
