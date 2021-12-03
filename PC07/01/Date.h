#pragma once
#include <iostream>;

class Date
{
private:
	int month,
		day,
		year;

public:
	Date(int m = 1, int d = 1, int y = 2001)
	{ month = m; day = d; year = y; }

	void setMonth(int m)
	{
		month = m;
	}

	void setDay(int d)
	{
		day = d;
	}

	void setYear(int y)
	{
		year = y;
	}

	void printCasual()
	{
		std::cout << month << '/' << day << '/' << year - 2000 << std::endl;
	}

	void printFormal()
	{
		std::string name = getFormal(month);

		std::cout << name << ' ' << day << ", " << year << std::endl;
	}

	void printEuro()
	{
		std::string name = getFormal(month);

		std::cout << day << ' ' << name << ' ' << year << std::endl;
	}

	std::string getFormal(int month)
	{
		std::string monthName;

		switch (month)
		{
		case 1:
			monthName = "January";
			break;
		case 2:
			monthName = "Feburary";
			break;
		case 3:
			monthName = "March";
			break;
		case 4:
			monthName = "April";
			break;
		case 5:
			monthName = "May";
			break;
		case 6:
			monthName = "June";
			break;
		case 7:
			monthName = "July";
			break;
		case 8:
			monthName = "August";
			break;
		case 9:
			monthName = "September";
			break;
		case 10:
			monthName = "October";
			break;
		case 11:
			monthName = "November";
			break;
		case 12:
			monthName = "December";
			break;
		default:
			break;
		}

		return monthName;
	}
};

