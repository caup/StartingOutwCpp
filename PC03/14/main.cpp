//Celcius to Fahrenheit
#include <iostream>

int main()
{
	int c_Temp, f_Temp;

	std::cout << "Input a temperature in Celsius: ";
	std::cin >> c_Temp;

	f_Temp = (9 / 5) * c_Temp + 32;

	std::cout << "That temperature is " << f_Temp << 'F';

	return 0;
}