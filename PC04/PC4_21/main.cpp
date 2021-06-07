//Freezing and Boiling Points
#include <iostream>

int main()
{
	double Temp;
	char Freeze,Boil;

	std::cout << "Enter a temperature to see what substances freeze and boil at that point: ";
	std::cin >> Temp;

	if (Temp <= -362)
		Freeze = 'O';
	else if (Temp < -306)
		Freeze = 'E';
	else if (Temp <= -173)
	{
		Freeze = 'E';
		Boil = 'O';
	}
	else if (Temp <= -38)
	{
		Freeze = 'M';
		Boil = 'O';
	}
	else if (Temp <= 32)
	{
		Freeze = 'W';
		Boil = 'O';
	}
	else if (Temp > 32 && Temp < 172)
		Boil = 'O';
	else if (Temp >= 676)
		Boil = 'M';
	else if (Temp >= 212)
		Boil = 'W';
	else if (Temp >= 172)
		Boil = 'E';

	switch (Freeze)
	{
	case 'O': std::cout << "Oxygen, ";
	case 'E': std::cout << "Ethyl alcohol, ";
	case 'M': std::cout << "Mercury and ";
	case 'W': std::cout << "Water will freeze. ";
	}
	switch (Boil)
	{

	case 'M': std::cout << "Mercury, ";
	case 'W': std::cout << "Water, ";
	case 'E': std::cout << "Ethyl alcohol and ";
	case 'O': std::cout << "Oxygen will boil ";
	}
	
	std::cout << "at " << Temp << "(F).\n\n";
	
	return 0;
}