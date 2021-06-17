//Minimum/Maximum
#include <iostream>

int main()
{
	int num1, num2, largest, smallest;

	std::cout << "Enter two integers: \n";
	std::cin >> num1 >> num2;

	largest = (num1 > num2) ? num1 : num2;
	smallest = (largest == num1) ? num2 : num1;

	std::cout << largest << " is the larger number and " << smallest << " is the smaller number.";

	return 0;
}