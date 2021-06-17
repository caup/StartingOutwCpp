//Color Mixer
#include <iostream>
#include <string>

int main()
{
	std::string color1, color2;

	std::cout << "Input two primary colors (red, blue, or yellow): \n";
	std::cin >> color1 >> color2;

	if (color1 == "red" || color1 == "Red")
	{
		if (color2 == "blue" || color2 == "Blue")
		{
			std::cout << "Red and blue make purple.";
		}
		else if (color2 == "yellow" || color2 == "Yellow")
		{
			std::cout << "Red and yellow make orange.";
		}
	}
	else if (color1 == "blue" || color1 == "Blue")
	{
		if (color2 == "red" || color2 == "Red")
		{
			std::cout << "Blue and red make purple.";
		}
		else if (color2 == "yellow" || color2 == "Yellow")
		{
			std::cout << "Blue and yellow make green.";
		}
	}
	else if (color1 == "yellow" || color1 == "Yellow")
	{
		if (color2 == "blue" || color2 == "Blue")
		{
			std::cout << "Yellow and blue make green.";
		}
		else if (color2 == "red" || color2 == "Red")
		{
			std::cout << "Yellow and red make orange.";
		}
	}
	else
	{
		std::cout << "You must enter only primary colors!";
	}

	return 0;
}