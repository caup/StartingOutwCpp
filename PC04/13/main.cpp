//Runnung the Race
#include <iostream>
#include <string>

int main()
{
	std::string runner1, runner2, runner3;
	double time1, time2, time3;

	std::cout << "Enter the name of runner 1 followed by their time:\n";
	std::cin >> runner1 >> time1;
	std::cout << "Enter the name of runner 2 followed by their time:\n";
	std::cin >> runner2 >> time2;
	std::cout << "Enter the name of runner 3 followed by their time:\n";
	std::cin >> runner3 >> time3;

	if (time1 > 0 && time2 > 0 && time3 > 0)
	{
		if (time1 > time2 && time1 > time3)
		{
			if (time2 > time3)
			{
				std::cout << "1. " << runner1 << "\n2. " << runner2 << "\n3. " << runner3;
			}
			else
			{
				std::cout << "1. " << runner1 << "\n2. " << runner3 << "\n3. " << runner2;
			}
		}
		else if (time2 > time1 && time2 > time3)
		{
			if (time1 > time3)
			{
				std::cout << "1. " << runner2 << "\n2. " << runner1 << "\n3. " << runner3;
			}
			else
			{
				std::cout << "1. " << runner2 << "\n2. " << runner3 << "\n3. " << runner1;
			}
		}
		else if (time3 > time1 && time3 > time2)
		{
			if (time1 > time2)
			{
				std::cout << "1. " << runner3 << "\n2. " << runner1 << "\n3. " << runner2;
			}
			else
			{
				std::cout << "1. " << runner3 << "\n2. " << runner2 << "\n3. " << runner1;
			}
		}
	}
	else
	{
		std::cout << "Times cannot be negative!";
	}

	return 0;
}