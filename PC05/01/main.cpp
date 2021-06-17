//Characters for the ASCII Codes
#include <iostream>

int main()
{
	for (int i = 32; i <= 127; i++)
	{
		std::cout << static_cast<char>(i) << ' ';

		if (i % 16 == 0)
		{
			std::cout << std::endl;
		}
	}
}
