// Character Converter Class
#include <iostream>
#include <Windows.h>
#include "CharConverter.h"

using std::string;

bool checkContinue(char c);

int main()
{
	CharConverter convert;
	string input;
	char check;

	do
	{
		std::cout << "Enter a string to be converted:\n";
		std::getline(std::cin, input);

		std::cout << "First letters converted to UPPERCASE:\n";
		std::cout << convert.properWords(input);
		std::cout << "\nAll letters converted to UPPERCASE:\n";
		std::cout << convert.uppercase(input);

		std::cout << "\n\nWould you like to enter another string? (Y to continue) ";
		std::cin >> check;
	} while (checkContinue(check));


}

bool checkContinue(char c)
{
	if (toupper(c) == 'Y')
	{
		system("CLS");
		return true;
	}
	return false;
}
