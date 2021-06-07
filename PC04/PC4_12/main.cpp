//Restaurant Selector
#include <iostream>

int main()
{
	char vegetarian, vegan, gluten_free;

	std::cout << "Is anyone in your party a vegetarian? (Y/N):  ";
	std::cin >> vegetarian;
	std::cout << "Is anyone in your party a vegan? (Y/N):       ";
	std::cin >> vegan;
	std::cout << "Is anyone in your party a gluten-free? (Y/N): ";
	std::cin >> gluten_free;

	if (vegetarian == 'Y' || vegan == 'Y' || gluten_free == 'Y')
	{
		if (vegetarian == 'Y' && vegan == 'Y' && gluten_free == 'Y')
		{
			std::cout << "The Chef's Kitchen\nCorner Cafe";
		}
		else if (vegetarian == 'Y' && vegan == 'N' && gluten_free == 'Y')
		{
			std::cout << "Main Street Pizza";
		}
		else
		{
			std::cout << "Mama's Fine Italian";
		}
	}
	else
	{
		std::cout << "Joe's Gourmet Burgers";
	}

	return 0;
}