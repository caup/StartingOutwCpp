//Student Line Up
#include <iostream>
#include <string>

int main()
{
	int numStudents;

	std::string student,
		first,
		last;

	do
	{
		std::cout << "Enter the number of students (1-20): ";
		std::cin >> numStudents;

	} while (numStudents < 1 || numStudents > 20);
	
	std::cout << "Student #1: ";
	std::cin >> student;

	first = last = student;

	for (int i = 2; i <= numStudents; i++)
	{
		std::cout << "Student #" << i << ": ";
		std::cin >> student;

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