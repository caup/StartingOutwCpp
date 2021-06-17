//Weight Loss
#include <iostream>

int main()
{
	int weight;

	std::cout << "Enter starting weight: ";
	std::cin >> weight;

	for (int i = 1; i <= 6; i++)
	{
		weight -= 4;
		std::cout << i << "   " << weight << std::endl;
	}

	return 0;
}