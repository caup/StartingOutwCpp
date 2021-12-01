// isPrime Function
#include <iostream>

bool isPrime(int x);

int main()
{
	int num;

	do
	{
		std::cout << "Enter an integer greater than 0: ";
		std::cin >> num;

	} while (num < 1);

	if (isPrime(num))
	{
		std::cout << num << " is a prime number.\n";
	}
	else
	{
		std::cout << num << " is not a prime number.\n";
	}

	return 0;
}

bool isPrime(int x)
{
	if (x < 2)
	{
		return false;
	}
	if (x == 2)
	{
		return true;
	}
	if (x % 2 == 0)
	{
		return false;
	}

	for (int i = 3; (i*i) <= x; i += 2)
	{
		if (x % i == 0)
		{
			return false;
		}
	}

	return true;
}
