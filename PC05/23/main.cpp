//Diamond Display
#include <iostream>

int main()
{
	int spc = 0,
		nspc = 0;

	std::cout << std::endl;

	for (int r = 1; r <= 7; r++)
	{

		if (r % 2 == 0)
		{
			spc++;
			continue;
		}
		else
		{
			for (int s = (r - 1) - spc; s <= 4; s++)
			{
				std::cout << " ";
			}

			for (int p = 1; p <= r; p++)
			{
				std::cout << "+";
			}
		}

		std::cout << std::endl;
	}

	for (int nr = 1; nr <= 5; nr++)
	{
		if (nr % 2 == 0)
		{
			nspc++;
			continue;
		}
		else
		{
			for (int ns = 1 - nspc ; ns <= 3; ns++)
			{
				std::cout << " ";
			}

			for (int np = 5; np >= nr; np--)
			{
				std::cout << "+";
			}
		}

		std::cout << std::endl;
	}

	return 0;
}