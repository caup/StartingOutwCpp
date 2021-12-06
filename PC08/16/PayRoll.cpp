#include "PayRoll.h"

PayRoll::PayRoll()
{
	payRate = 0.0;
	hoursWorked = 0.0;
}

PayRoll::~PayRoll()
{
}

void PayRoll::setPayRate(double p)
{
	payRate = p;
}

void PayRoll::setHoursWorked(double h)
{
	hoursWorked = h;
}

double PayRoll::calcGrossPay()
{
	return payRate * hoursWorked;
}
