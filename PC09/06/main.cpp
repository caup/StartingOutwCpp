//String Selection Sort
#include <iostream>
#include <string>

using std::string;

void strSelectionSort(string[], int);
void stringSwap(string&, string&);

int main()
{
	const int SIZE = 20;
	string name[SIZE] =
	{ "Collins, Bill",  "Smith, Bart",  "Michalski, Joe", "Griffin, Jim",
	"Sanchez, Manny",  "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
	 "Allison, Jeff",  "Moreno, Juan", "Wolfe, Bill",    "Whitman, Jean",
	 "Moretti, Bella", "Wu, Eric",     "Patel, Renee",   "Harrison, Rose",
	 "Smith, Cathy",   "Conroy, Pat",  "Kelly, Sean",    "Holland, Beth" };
	
	strSelectionSort(name, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << name[i] << '\n';
	}

	return 0;

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
