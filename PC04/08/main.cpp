//Math Tutor Version 2
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(0));

	int num1 = rand() % (50 - 10 + 1) + 10,
		num2 = rand() % (50 - 10 + 1) + 10,
		num3 = num1 + num2,
		numInput;

	std::cout << "  " << num1 << std::endl;
	std::cout << "+ " << num2 << std::endl;
	std::cout << "____" << std::endl;
	std::cin >> numInput;
	
	if (numInput == num3)
	{
		std::cout << "CORRECT!";
	}
	else
	{
		std::cout << "The correct answer is: " << num3;
	}

	return 0;
}