//Population
#include <iostream>

int main()
{
	int pop, days;
	double rate;

	do
	{
		std::cout << "Enter starting population (2+): ";
		std::cin >> pop;

	} while (pop < 2);

	do
	{
		std::cout << "Enter percentage rate of multiplication: ";
		std::cin >> rate;
		rate /= 100;
	} while (rate < 0);

	do
	{
		std::cout << "Enter number of days: ";
		std::cin >> days;

	} while (days < 1);

	for (int i = 1; i <= days; i++)
	{
		pop += pop * rate;
		
		std::cout << i << "     " << pop << std::endl;
	}

	return 0;
}