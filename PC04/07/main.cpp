//Time Calculator
#include <iostream>

int main()
{
	const int SECONDS_DAY = 86400,
			  SECONDS_HOUR = 3600,
			  SECONDS_MIN = 60;

	int inputSeconds;

	std::cout << "Enter a number of seconds: ";
	std::cin >> inputSeconds;

	if (inputSeconds >= SECONDS_DAY)
	{
		std::cout << "# of days: " << (inputSeconds / SECONDS_DAY);
	}
	else if (inputSeconds >= SECONDS_HOUR)
	{
		std::cout << "# of hours: " << (inputSeconds / SECONDS_HOUR);
	}
	else if (inputSeconds >= 60)
	{
		std::cout << "# of minutes: " << (inputSeconds / SECONDS_MIN);
	}

	return 0;
}