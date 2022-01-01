//Using Files--String Selection Sort Modification
#include <iostream>
#include <fstream>
#include <string>

using std::string;

void readToArray(string[], int);
void strSelectionSort(string[], int);
void stringSwap(string&, string&);

int main()
{
	const int SIZE = 20;
	string name[SIZE];

	readToArray(name, SIZE);
	strSelectionSort(name, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << name[i] << '\n';
	}

	return 0;

}

void readToArray(string arr[], int size)
{
	std::ifstream inputFile("names.dat");

	for (int i = 0; i < size; i++)
	{
		std::getline(inputFile, arr[i]);
	}
}

void strSelectionSort(string arr[], int size)
{
	int minIndex;
	string minValue;

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = arr[start];
		for (int index = start + 1; index < size; index++)
		{
			if (arr[index] < minValue)
			{
				minValue = arr[index];
				minIndex = index;
			}
		}
		stringSwap(arr[minIndex], arr[start]);
	}
}

void stringSwap(string& a, string& b)
{
	string tmp = a;
	a = b;
	b = tmp;
}