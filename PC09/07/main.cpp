//Binary String Sort
#include <iostream>
#include <string>

using std::string;

void strSelectionSort(string[], int);
void stringSwap(string&, string&);
void strBinarySearch(string[], int, string);

int main()
{
	const int SIZE = 20;
	string name[SIZE] =
	{ "Collins, Bill",  "Smith, Bart",  "Michalski, Joe", "Griffin, Jim",
	"Sanchez, Manny",  "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
	 "Allison, Jeff",  "Moreno, Juan", "Wolfe, Bill",    "Whitman, Jean",
	 "Moretti, Bella", "Wu, Eric",     "Patel, Renee",   "Harrison, Rose",
	 "Smith, Cathy",   "Conroy, Pat",  "Kelly, Sean",    "Holland, Beth" };

	std::cout << "Unsorted array:\n";
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << name[i] << '\n';
	}

	strSelectionSort(name, SIZE);
	std::cout << "\nSorted array:\n";
	for (int j = 0; j < SIZE; j++)
	{
		std::cout << name[j] << '\n';
	}

	string input;
	std::cout << "\nEnter a name from the list: ";
	std::getline(std::cin, input);
	strBinarySearch(name, SIZE, input);

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

void strBinarySearch(string arr[], int size, string match)
{
	int first = 0, last = size - 1, middle = 0;
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (arr[middle] == match)
		{
			found = true;
			std::cout << "\nThe name was found!\n";
			return;
		}
		else if (arr[middle] > match)
			last = middle - 1;
		else
			first = middle + 1;
	}
	std::cout << "\nThe name was not found!\n";
}
