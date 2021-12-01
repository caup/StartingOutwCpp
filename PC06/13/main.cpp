// Future Value
#include <iostream>
#include <iomanip>

double futureValue(double pV, double iR, int nM);

int main()
{
	double presentValue, fValue, interestRate;
	int numOfMonths;

	std::cout << "Enter the present value, monthly interest rate, and number of months:\n";
	std::cin >> presentValue >> interestRate >> numOfMonths;

	fValue = futureValue(presentValue, interestRate, numOfMonths);

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "The future value is " << fValue;

	return 0;
}

double futureValue(double pV, double iR, int nM)
{
	iR /= 100;
	return pV * pow((1 + iR), nM);
}