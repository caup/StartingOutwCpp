// Kinetic Energy
#include <iostream>
#include <iomanip>

double kineticEnergy(double m, double v);

int main()
{
	double mass, velocity;

	std::cout << "Enter mass: ";
	std::cin >> mass;
	std::cout << "Enter velocity: ";
	std::cin >> velocity;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "KE = " << kineticEnergy(mass, velocity) << std::endl;

	return 0;
}

double kineticEnergy(double m, double v)
{
	return 0.5 * m * pow(v, 2);
}
