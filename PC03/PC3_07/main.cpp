//Average Rainfall
#include <iostream>
#include <iomanip>
#include <string>

using std::string;

int main()
{
	string month1, month2, month3,
		months;
	double rain1, rain2, rain3,
		avgRain;

	std::cout << "Enter the names of 3 months (seperated by a return)" << std::endl;
	std::cin >> month1 >> month2 >> month3;
	std::cout << "Enter the amount of rainfall for each month" << std::endl;
	std::cin >> rain1 >> rain2 >> rain3;

	months = month1 + ", " + month2 + ", and " + month3;
	avgRain = (rain1 + rain2 + rain3) / 3;

	std::cout << std::showpoint << std::fixed << std::setprecision(2);
	std::cout << "The average monthly rainfall for " << months << " was " << avgRain << " inches.";

	return 0;
}