//Stadium Seating
#include <iostream>
#include <iomanip>

int main()
{
	const double CLASS_A_PRICE = 15,
				 CLASS_B_PRICE = 12,
				 CLASS_C_PRICE =  9;
	
	int a_Sold, b_Sold, c_Sold;
	
	double ticketRevenue;

	std::cout << "How many class A tickets were sold? ";
	std::cin >> a_Sold;
	std::cout << "How many class B tickets were sold? ";
	std::cin >> b_Sold;
	std::cout << "How many class C tickets were sold? ";
	std::cin >> c_Sold;

	ticketRevenue = a_Sold * CLASS_A_PRICE + b_Sold * CLASS_B_PRICE + c_Sold * CLASS_C_PRICE;

	std::cout << std::fixed << std::showpoint << std::setprecision(2) << "Total earned from sales: $" << ticketRevenue;

	return 0;
}