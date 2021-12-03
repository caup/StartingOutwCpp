// Ups and Downs
#include <iostream>
#include <Windows.h>

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD upPOS{ 10, 29 },
		downPOS{ 30, 0 };

	SetConsoleCursorPosition(screen, upPOS);
	std::cout << "UP";
	SetConsoleCursorPosition(screen, downPOS);
	std::cout << "DOWN";
	Sleep(1000);

	while (upPOS.Y > 0 && downPOS.Y < 29)
	{
		SetConsoleCursorPosition(screen, upPOS);
		std::cout << "  ";
		upPOS.Y--;
		SetConsoleCursorPosition(screen, upPOS);
		std::cout << "UP";

		SetConsoleCursorPosition(screen, downPOS);
		std::cout << "    ";
		downPOS.Y++;
		SetConsoleCursorPosition(screen, downPOS);
		std::cout << "DOWN";

		Sleep(1000);
	}

	SetConsoleCursorPosition(screen, upPOS);
	std::cout << "  ";
	SetConsoleCursorPosition(screen, downPOS);
	std::cout << "    ";

	Sleep(2500);
	return 0;
}