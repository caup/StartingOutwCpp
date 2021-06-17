//Sum of Numbers
#include <iostream>

int main()
{
	int input, sum = 0;
	
	do
	{
		std::cout << "Input a positive integer: ";
		std::cin >> input;

	} while (input < 0);

	for (int i = 1; i <= input; i++)
	{
		sum += i;
	}

	std::cout << "The sum of the numbers 1 to " << input << " is " << sum;

	return 0;
}