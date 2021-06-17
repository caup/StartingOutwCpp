//Using Files--Total and Average Rainfall
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main()
{
	std::ifstream inputFile;
	std::string getMonth, startMonth, endMonth;
	double getRain, totalRain = 0, avgRain;

	inputFile.open("rainfall.txt");

	if (!inputFile)
	{
		std::cout << "Error opening file.";
	}
	else
	{
		for (int i = 0; i < 8; i++)
		{
			if (i < 4)
			{
				inputFile >> getMonth;

				if (i == 0)
				{
					startMonth = getMonth;
				}
				else if (i == 3)
				{
					endMonth = getMonth;
				}
			}
			else
			{
				inputFile >> getRain;

				totalRain += getRain;
			}
		}

		avgRain = totalRain / 4;

		std::cout << std::fixed << std::showpoint << std::setprecision(2);
		std::cout << "During the months of " << startMonth << "--" << endMonth << ", the total rainfall was "
			<< totalRain << " inches and the average monthly rainfall was " << avgRain << " inches." << std::endl;
	}

	return 0;
}