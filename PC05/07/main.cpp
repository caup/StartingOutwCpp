//Circle Areas
#include <iostream>

int main()
{
	for (double r = 1; r <= 8; r *= 2)
	{
		double area = 3.14 * pow(r, 2);

		std::cout << r << "   " << area << std::endl;
	}

	return 0;
}