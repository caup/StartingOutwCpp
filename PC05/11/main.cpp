//Calories Burned
#include <iostream>

int main()
{
	double calsBurned = 0;

	for (int i = 5; i <= 30; i += 5)
	{
		calsBurned = i * 3.9;

		std::cout << i << "  " << calsBurned << std::endl;
	}

	return 0;
}