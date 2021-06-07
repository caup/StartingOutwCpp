//Angle Calculator
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	double input_Angle, sine, cosine, tangent;

	std::cout << "Enter an angle in radians: ";
	std::cin >> input_Angle;

	sine = sin(input_Angle);
	cosine = cos(input_Angle);
	tangent = tan(input_Angle);

	std::cout << std::fixed << std::setprecision(4) << std::endl;
	std::cout << "Sine:    " << sine << std::endl <<
				 "Cosine:  " << cosine << std::endl <<
				 "Tangent: " << tangent;

	return 0;
}