// Moving Inchworm
#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	std::string i1 = "\\/",
		i2 = "O",
		i3 = "O";

	COORD pos{ 0, 3 };

	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleCursorPosition(screen, pos);
	std::cout << i1;
	pos.X += 11;
	Sleep(1000);

	SetConsoleCursorPosition(screen, pos);
	std::cout << i2;
}