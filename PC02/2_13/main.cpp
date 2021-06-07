/* Pay Period Gross Pay
A particular employee earns $39,000 annually. Write a program that determines and displays what the
amount of his gross pay will be for each pay period if he is paid twice a month (24 pay checks per year)
and if he is paid bi-weekly (26 checks per year). */
#include <iostream>

int main()
{
	double salary = 39000;
	int biMonthly = 24,
		biWeekly = 26;

	std::cout << "Bi-monthly paycheck amount: $" << salary / biMonthly << std::endl;
	std::cout << "Bi-weekly paycheck amount: $" << salary / biWeekly;
}