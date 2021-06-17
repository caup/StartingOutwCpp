//Spectral Analysis
#include <iostream>

int main()
{
	double wavelengthMeters;

	std::cout << "Spectral Analysis\n";
	std::cout << "Enter the wavelength in meters: ";
	std::cin >> wavelengthMeters;

	if (wavelengthMeters <= 1E-2)
	{
		std::cout << "This is a radio wave.";
	}
	else if (wavelengthMeters > 1E-2 && wavelengthMeters <= 1E-3)
	{
		std::cout << "This is a microwave.";
	}
	else if (wavelengthMeters > 1E-3 && wavelengthMeters <= 7E-7)
	{
		std::cout << "This is an infrared wave.";
	}
	else if (wavelengthMeters > 7E-10 && wavelengthMeters <= 4E-7)
	{
		std::cout << "This is a visible light wave.";
	}
	else if (wavelengthMeters > 4E-7 && wavelengthMeters <= 1E-8)
	{
		std::cout << "This is a ultraviolet wave.";
	}
	else if (wavelengthMeters > 1E-8 && wavelengthMeters <= 1E-11)
	{
		std::cout << "This is a x-ray wave.";
	}
	else if (wavelengthMeters > 1E-11)
	{
		std::cout << "This is a gamma ray wave.";
	}

	return 0;
}