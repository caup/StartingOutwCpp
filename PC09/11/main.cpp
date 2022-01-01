//Ascending Circles
#include <iostream>
#include <iomanip>
#include "Circle.h"              // Circle class declaration file

const int NUM_CIRCLES = 7;

void bubbleCircleSort(Circle[], int);

int main()
{
	Circle circle[NUM_CIRCLES] = { Circle(2.5), Circle(4.0), Circle(1.0),
							Circle(3.0), Circle(6.0), Circle(5.5), Circle(2.0) };  // Define an array of Circle objects

	bubbleCircleSort(circle, NUM_CIRCLES);

	std::cout << std::setw(17) << "Radius" << std::setw(7) << "Area\n";
	std::cout << std::fixed << std::setprecision(1);
	for (int i = 0; i < NUM_CIRCLES; i++)
	{
		std::cout << "Circle " << i + 1 << ":"
			<< std::setw(6) << circle[i].getRadius()
			<< std::setw(8) << circle[i].findArea() << std::endl;
	}

	return 0;
}

void bubbleCircleSort(Circle c[], int size)
{
	bool swapped = true;
	for (int max = size - 1; max > 0 && swapped; max--)
	{
		swapped = false;
		for (int index = 0; index < max; index++)
		{
			if (c[index].getRadius() > c[index + 1].getRadius())
			{
				double tmp = c[index].getRadius();
				c[index].setRadius(c[index + 1].getRadius());
				c[index + 1].setRadius(tmp);

				swapped = true;
			}
		}
	}
}
