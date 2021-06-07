//Areas of Rectangles
#include <iostream>

int main()
{
	double length1, width1,
		   length2, width2;

	std::cout << "Enter the length and width of the first triangle: \n";
	std::cin >> length1 >> width1;
	std::cout << "\nEnter the length and width of the second triangle: \n";
	std::cin >> length2 >> width2;

	if ((length1 * width1) > (length2 * width2))
	{
		std::cout << "Triangle 1 is larger.";
	}
	else if ((length1 * width1) < (length2 * width2))
	{
		std::cout << "Triangle 2 is larger.";
	}
	else
	{
		std::cout << "They are the same size.";
	}

	return 0;
}