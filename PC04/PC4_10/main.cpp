//Geometry Calculator
#include <iostream>

int main()
{
	int choice;

	std::cout << "Geometry Calculator\n"
			  << "	1. Calculate the Area of a Circle\n"
			  << "	2. Calculate the Area of a Rectangle\n"
			  << "	3. Calculate the Area of a Triangle\n"
			  << "	4. Quit\n"
			  << "Enter your choice (1-4): ";
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		double radius;
		std::cout << "Enter the radius of the circle: ";
		std::cin >> radius;
		std::cout << "The area of the circle is: " << 3.14159 * pow(radius, 2);
		break;
	case 2:
		double length, width;
		std::cout << "Enter the length of the rectangle: ";
		std::cin >> length;
		std::cout << "Enter the width of the rectangle:	";
		std::cin >> width;
		std::cout << "The area of the rectangle is: " << length * width;
		break;
	case 3:
		double tBase, tHeight;
		std::cout << "Enter the length of the triangles base: ";
		std::cin >> tBase;
		std::cout << "Enter the height of the triangle: ";
		std::cin >> tHeight;
		std::cout << "The area of the triangle is: " << (tBase / 2) * tHeight;
		break;
	case 4:
		return 0;
	default:
		std::cout << "Invalid input.";
		break;
	}

	return 0;
}