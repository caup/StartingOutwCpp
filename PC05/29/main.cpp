//Using Files--Student Line Up
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::string student,
		first,
		last;

	std::ifstream inputFile;

	inputFile.open("lineUp.txt");

	inputFile >> student;
	first = last = student;

	for (int i = 0; i <= 3; i++)
	{
		inputFile >> student;

		if (student < first)
		{
			first = student;
		}

		if (student > last)
		{
			last = student;
		}
	}

	std::cout << "First student:  " << first << std::endl;
	std::cout << "Last student:   " << last << std::endl;

	return 0;
}