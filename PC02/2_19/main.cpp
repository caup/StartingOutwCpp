//Annual High Temperatures
#include <iostream>

int main()
{
	double tempIncr = 1.02,
		nycTemp = 85 * tempIncr,
		denTemp = 88 * tempIncr,
		phxTemp = 106 * tempIncr;

	std::cout << "NYC: " << nycTemp << "\nDEN: " << denTemp << "\nPHX: " << phxTemp;
}