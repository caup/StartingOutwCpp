//Math Tutor Version 3
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main()
{
	int choice;

	std::cout << "Choose from the menu below:\n"
		<< "1. Addition\n"
		<< "2. Subtraction\n"
		<< "3. Multiplication\n"
		<< "4. Quit\n";
	std::cin >> choice;

	while (choice < 1 || choice > 4)
	{
		std::cout << "Enter a number between 1 and 4.\n";
		std::cin >> choice;
	}

	int aNum1, aNum2, aNum3 = 0, aNumInput,
		sNum1, sNum2, sNum3, sNumInput,
		mNum1, mNum2, mNum3, mNumInput;

	srand(time(0));

	while (choice)
	{


		switch (choice)
		{
		case 1:
			aNum1 = rand() % (50 - 10 + 1) + 10,
				aNum2 = rand() % (50 - 10 + 1) + 10,
				aNum3 = aNum1 + aNum2,
				aNumInput;

			std::cout << "  " << aNum1 << std::endl;
			std::cout << "+ " << aNum2 << std::endl;
			std::cout << "____" << std::endl;
			std::cin >> aNumInput;

			if (aNumInput == aNum3)
			{
				std::cout << "CORRECT!\n";
			}
			else
			{
				std::cout << "The correct answer is: " << aNum3 << std::endl;
			}

			break;
		case 2:
			sNum1 = rand() % (50 - 10 + 1) + 10,
				sNum2 = rand() % (50 - 10 + 1) + 10,
				sNum3 = sNum1 - sNum2,
				sNumInput;

			std::cout << "  " << sNum1 << std::endl;
			std::cout << "- " << sNum2 << std::endl;
			std::cout << "____" << std::endl;
			std::cin >> sNumInput;

			if (sNumInput == sNum3)
			{
				std::cout << "CORRECT!\n";
			}
			else
			{
				std::cout << "The correct answer is: " << sNum3 << std::endl;
			}

			break;
		case 3:
			mNum1 = rand() % (50 - 10 + 1) + 10,
				mNum2 = rand() % (50 - 10 + 1) + 10,
				mNum3 = mNum1 * mNum2,
				mNumInput;

			std::cout << "  " << mNum1 << std::endl;
			std::cout << "x " << mNum2 << std::endl;
			std::cout << "____" << std::endl;
			std::cin >> mNumInput;

			if (mNumInput == mNum3)
			{
				std::cout << "CORRECT!\n";
			}
			else
			{
				std::cout << "The correct answer is: " << mNum3 << std::endl;
			}

			break;
		case 4:
			return 0;
		}

		std::cout << "Choose from the menu below:\n"
			<< "1. Addition\n"
			<< "2. Subtraction\n"
			<< "3. Multiplication\n"
			<< "4. Quit\n";
		std::cin >> choice;
	}

	return 0;
}