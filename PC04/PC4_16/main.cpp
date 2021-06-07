//Body Mass Index
#include <iostream>
#include <iomanip>

int main()
{
	double weight, height, bmi;

	std::cout << "Enter your weight in pounds followed by your height in inches:\n";
	std::cin >> weight >> height;

	bmi = weight * 703 / pow(height, 2);

	std::cout << std::fixed << std::setprecision(1);

	if (bmi > 25)
	{
		std::cout << "Your BMI is " << bmi << " which is considered overweight.";
	}
	else if (bmi < 18.5)
	{
		std::cout << "Your BMI is " << bmi << " which is considered underweight.";
	}
	else
	{
		std::cout << "Your BMI is " << bmi << " which is considered optimal weight.";
	}

	return 0;
}