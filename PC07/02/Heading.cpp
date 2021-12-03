#include "Heading.h"
#include <iostream>

void Heading::oneLine()
{
	std::cout << companyName << ' ' << reportName << std::endl;
}

void Heading::fourLine()
{
	int cLength = companyName.length(),
		rLength = reportName.length(),
		largest;

	if (cLength > rLength)
	{
		largest = cLength;
	}
	else
	{
		largest = rLength;
	}

	for (int i = 0; i < largest * 4; i++)
	{
		std::cout << '*';
	}
	std::cout << '\n';
	for (int i = 0; i < largest * 2; i++)
	{
		std::cout << ' ';
	}

	std::cout << companyName << '\n';

	for (int i = 0; i < largest * 2; i++)
	{
		std::cout << ' ';
	}

	std::cout << reportName << '\n';

	for (int i = 0; i < largest * 4; i++)
	{
		std::cout << '*';
	}
}