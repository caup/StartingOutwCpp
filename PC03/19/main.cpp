//Math Tutor
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main()
{
	unsigned seed;
	seed = time(0);
	srand(seed);

	int num1 = rand() % 9 + 1,
		num2 = rand() % 9 + 1,
		num3 = num1 + num2,
		numInput;

	std::cout << "  " << num1 << std::endl;
	std::cout << "+ " << num2 << std::endl;
	std::cout << "____" << std::endl;
	std::cin >> numInput;
	std::cout << "The answer is: " << num3;

	return 0;
}