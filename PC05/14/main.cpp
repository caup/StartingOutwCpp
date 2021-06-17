//The Greatest and Least of These
#include <iostream>

int main()
{
	int num1, num2, num3, sentinel;

	do
	{
		std::cout << "Enter 4 integers separated by a space, end with -99: ";
		std::cin >> num1 >> num2 >> num3 >> sentinel;

	} while (sentinel != -99);
	
	if (num1 > num2)
	{
		if (num2 > num3)
		{
			std::cout << "Largest: " << num1 << "  Smallest: " << num3;
		}
		else
		{
			std::cout << "Largest: " << num1 << "  Smallest: " << num2;
		}
	}
	if (num2 > num1)
	{
		if (num1 > num3)
		{
			std::cout << "Largest: " << num2 << "  Smallest: " << num3;
		}
		else
		{
			std::cout << "Largest: " << num2 << "  Smallest: " << num1;
		}
	}
	if (num3 > num1)
	{
		if (num2 > num1)
		{
			std::cout << "Largest: " << num3 << "  Smallest: " << num1;
		}
		else
		{
			std::cout << "Largest: " << num3 << "  Smallest: " << num2;
		}
	}

	return 0;
}