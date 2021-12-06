// Rainfall Statistics
#include <iostream>
#include <iomanip>
#include <string>

using std::string;

const int MONTHS = 12;

void getData(double arr[]);
double totalRainfall(double arr[]);
double averageRainfall(double total);
int driestMonth(double arr[]);
int wettestMonth(double arr[]);

int main()
{
	string names[MONTHS]{
		"January", "Feburary", "March", "April", "May", "June", "July",
		"August", "September", "October", "November", "December"
	};

	double rainfall[MONTHS];
	double total, average;
	int driest, wettest;

	std::cout << "Enter the total rainfall for each month.\n";
	getData(rainfall);
	total = totalRainfall(rainfall);
	average = averageRainfall(total);
	driest = driestMonth(rainfall);
	wettest = wettestMonth(rainfall);

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "\n\n  2021 Rain Report for Springdale County\n\n";
	std::cout << "Total rainfall: " << total << " inches\n";
	std::cout << "Average monthly rainfall: " << average << " inches\n";
	std::cout << "The least rain fell in " << names[driest] << " with " << rainfall[driest] << " inches\n";
	std::cout << "The most rain fell in " << names[wettest] << " with " << rainfall[wettest] << " inches\n";

	return 0;
}

void getData(double arr[])
{
	for (int i = 0; i < MONTHS; i++)
	{
		std::cout << i + 1 << ": ";
		std::cin >> arr[i];
	}
}

double totalRainfall(double arr[])
{
	double total = 0;
	for (int i = 0; i < MONTHS; i++)
	{
		total += arr[i];
	}
	return total;
}

double averageRainfall(double total)
{
	return total / MONTHS;
}

int driestMonth(double arr[])
{
	double driest = arr[0];
	int month = 0;
	for (int i = 1; i < MONTHS; i++)
	{
		if (arr[i] < driest)
		{
			driest = arr[i];
			month = i;
		}
	}
	return month;
}

int wettestMonth(double arr[])
{
	double wettest = arr[0];
	int month = 0;
	for (int i = 1; i < MONTHS; i++)
	{
		if (arr[i] > wettest)
		{
			wettest = arr[i];
			month = i;
		}
	}
	return month;
}
