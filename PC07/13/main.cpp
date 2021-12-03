// Wrapping Ups and Downs
#include <iostream>
#include <Windows.h>

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 0; i < 3; i++)
	{
		COORD upPOS{ 10, 29 },
			downPOS{ 30, 0 };

		SetConsoleCursorPosition(screen, upPOS);
		std::cout << "UP";
		SetConsoleCursorPosition(screen, downPOS);
		std::cout << "DOWN";
		Sleep(800);

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

			Sleep(800);
		}

		SetConsoleCursorPosition(screen, upPOS);
		std::cout << "  ";
		SetConsoleCursorPosition(screen, downPOS);
		std::cout << "    ";
	}

	Sleep(2500);
	return 0;
}