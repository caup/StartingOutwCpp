//Ingredients Adjuster
#include <iostream>
#include <iomanip>

int main()
{
	const double SUGAR = 1.5,
				 BUTTER = 1,
				 FLOUR = 2.75;

	int numCookies;
	double cookieAdjustment,
		sugar, butter, flour;

	std::cout << "How many cookies do you want to make? ";
	std::cin >> numCookies;

	cookieAdjustment = numCookies / 48.0;
	sugar = SUGAR * cookieAdjustment;
	butter = BUTTER * cookieAdjustment;
	flour = FLOUR * cookieAdjustment;

	std::cout << std::showpoint << std::fixed << std::setprecision(1);
	std::cout << "You will need:" << std::endl;
	std::cout << sugar << " cups of sugar\n" <<
		butter << " cups of butter\n" <<
		flour << " cups of flour";

	return 0;
}