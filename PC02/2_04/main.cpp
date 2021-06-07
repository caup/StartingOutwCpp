//Restaurant Bill
#include <iostream>

int main()
{
	double mealCharge = 44.50,
		tax = mealCharge * 0.0675,
		tip = (mealCharge + tax) * 0.15;

	std::cout << "Subtotal: " << mealCharge << std::endl;
	std::cout << "Tax:      " << tax << std::endl;
	std::cout << "Gratuity: " << tip << std::endl;
	std::cout << "Total:    " << mealCharge + tax + tip;

	return 0;
}