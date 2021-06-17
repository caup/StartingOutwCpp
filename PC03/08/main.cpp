//Male and Female Percentages
#include <iostream>
#include <iomanip>

int main()
{
	double males, females, malesAndFemales,
		   percent_M, percent_F;

	std::cout << "Enter the number of male students: ";
	std::cin >> males;
	std::cout << "Enter the number of female stundets: ";
	std::cin >> females;

	malesAndFemales = males + females;
	percent_F = (females / malesAndFemales) * 100;
	percent_M = (males / malesAndFemales) * 100;

	std::cout << std::showpoint << std::fixed << std::setprecision(2);
	std::cout << "The percentage of males is " << percent_M << " and the percentage of females is " << percent_F;

	return 0;
}