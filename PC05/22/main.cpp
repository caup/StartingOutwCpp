//Triangle Display
#include <iostream>

int main()
{
	for (int r = 1; r <= 7; r++)
	{
		if (r % 2 == 0)
		{
			continue;
		}
		else
		{
			for (int pc = 1; pc <= r; pc++)
			{
				std::cout << "+";
			}
		}
		std::cout << std::endl;
	}

	for (int rr = 1; rr <= 5; rr++)
	{
		if (rr % 2 == 0)
		{
			continue;
		}
		else
		{
			for (int rpc = 5; rpc >= rr; rpc--)
			{
				std::cout << "+";
			}
		}
		std::cout << std::endl;
	}
}