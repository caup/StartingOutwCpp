// Present Value
#include <iostream>
#include <iomanip>

double presentValue(double fV, double iR, int nM);

int main()
{
	double fValue, pValue, annualIR, monthlyIR;
	int numYears, numMonths;

	std::cout << "Enter the future value, annual interest rate, and number of years:\n";
	std::cin >> fValue >> annualIR >> numYears;

	monthlyIR = (annualIR / 12) / 100;
	numMonths = numYears * 12;

	pValue = presentValue(fValue, monthlyIR, numMonths);

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "The present value is " << pValue;

	return 0;
}

double presentValue(double fV, double iR, int nM)
{
	return fV / pow((1 + iR), nM);
}
