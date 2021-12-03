// Report Heading
#include <iostream>
#include "Heading.h"

int main()
{
	Heading header;
	std::string company, report;

	std::cout << "Company name: ";
	std::cin >> company;
	std::cout << "Report name: ";
	std::cin >> report;

	header.oneLine();
	header.fourLine();

	return 0;
}