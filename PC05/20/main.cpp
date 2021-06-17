//Rectangle Display
#include <iostream>

int main()
{
	int num1, num2, length, width;

	do
	{
		std::cout << "Enter two integers from 2 to 10: ";
		std::cin >> num1 >> num2;

	} while ((num1 < 2 || num1 > 10) || (num2 < 2 || num2 > 10));

	if (num1 > num2)
	{
		length = num1;
		width = num2;
	}
	else if (num1 < num2)
	{
		length = num2;
		width = num1;
	}
	else
	{
		length = width = num1 = num2;
	}

	for (int row = 0; row < width; row++)
	{
		for (int column = 0; column < length; column++)
		{
			std::cout << "X";
		}

		std::cout << std::endl;
	}

	return 0;
}