//Roman Numeral Converter
#include <iostream>

int main()
{
	int num;

	std::cout << "Input a numer between 1 and 10 to be displayed as a Roman Numeral: ";
	std::cin >> num;

	switch (num)
	{
	case 1:
		std::cout << 'I';
		break;
	case 2:
		std::cout << "II";
		break;
	case 3:
		std::cout << "III";
		break;
	case 4:
		std::cout << "IV";
		break;
	case 5:
		std::cout << 'V';
		break;
	case 6:
		std::cout << "VI";
		break;
	case 7:
		std::cout << "VII";
		break;
	case 8:
		std::cout << "VIII";
		break;
	case 9:
		std::cout << "IX";
		break;
	case 10:
		std::cout << 'X';
		break;
	default:
		std::cout << "Invalid input.";
		break;
	}

	return 0;
}