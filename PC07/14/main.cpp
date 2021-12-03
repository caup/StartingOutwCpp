// Left and Right
#include <iostream>
#include <Windows.h>

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD leftPOS{ 0, 13},
		rightPOS{ 115, 15};

	SetConsoleCursorPosition(screen, leftPOS);
	std::cout << "LEFT";
	SetConsoleCursorPosition(screen, rightPOS);
	std::cout << "RIGHT";

	while (leftPOS.X < 120 && rightPOS.X > 0)
	{
		SetConsoleCursorPosition(screen, leftPOS);
		std::cout << "    ";
		leftPOS.X++;
		SetConsoleCursorPosition(screen, leftPOS);
		std::cout << "LEFT";

		SetConsoleCursorPosition(screen, rightPOS);
		std::cout << "     ";
		rightPOS.X--;
		SetConsoleCursorPosition(screen, rightPOS);
		std::cout << "RIGHT";

		Sleep(150);
	}

	SetConsoleCursorPosition(screen, leftPOS);
	std::cout << "    ";
	SetConsoleCursorPosition(screen, rightPOS);
	std::cout << "     ";

	Sleep(2500);
	return 0;
}