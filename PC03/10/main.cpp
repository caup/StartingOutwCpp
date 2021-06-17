//Theatre Concession Sales
#include <iostream>
#include <iomanip>

int main()
{
	const double EVENING_SHOW = 10,
		EVENING_CONS = 6.5,
		KIDDIE_SHOW = 3,
		KIDDIE_CONS = 8.5,
		TOTAL_SALES = EVENING_CONS + EVENING_SHOW + KIDDIE_CONS + KIDDIE_SHOW;

	double ticketPercentage = (EVENING_SHOW + KIDDIE_SHOW) / TOTAL_SALES * 100,
		consPercentage = (EVENING_CONS + KIDDIE_CONS) / TOTAL_SALES * 100;

	std::cout << std::fixed << std::setprecision(1);
	std::cout << ticketPercentage << "% of sales comes from tickets and	" << consPercentage << "% comes from concessions.";

	return 0;
}