//Fat Gram Calculator
#include <iostream>
#include <iomanip>

int main()
{
	double calories, fatCalories;
	double fatGrams, fatPercent;

	std::cout << "Enter the total calories follwed by grams of fat:\n";
	std::cin >> calories >> fatGrams;

	fatCalories = fatGrams * 9;
	fatPercent = fatCalories / calories * 100;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "% calories from fat: " << fatPercent << '%';

	if (fatCalories < calories)
	{
		if ((calories * 0.3) > fatCalories)
		{
			std::cout << "\n!Low Fat!";
		}
	}
	else
	{
		std::cout << "\nCalories from fat cannot be greater than total calories!";
	}
}