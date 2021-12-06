// Array of Payroll Objects
#include <iostream>
#include <fstream>
#include <iomanip>
#include "PayRoll.h"

void payrollFile(PayRoll arr[]);

int main()
{
	PayRoll paycheck[7];

	payrollFile(paycheck);
}

void payrollFile(PayRoll arr[])
{
	std::ifstream inputFile("payroll.dat");
	double hours, pay;

	for (int i = 0; i < 7; i++)
	{
		inputFile >> hours;
		arr[i].setHoursWorked(hours);
		inputFile >> pay;
		arr[i].setPayRate(pay);
	}
}
