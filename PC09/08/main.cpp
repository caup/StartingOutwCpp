//Search Benchmarks
#include <iostream>

const int MAX = 20;

int linearSearch(int[], int, int);
int binarySearch(int[], int, int);

int main()
{
	int nums[MAX] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
		     11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	
	int value;

	do
	{
		std::cout << "Enter a number 1 - 20: ";
		std::cin >> value;
	} while (value < 1 || value > 20);

	std::cout << "\nNumber of comparisons\n"
			  << "Linear: " << linearSearch(nums, MAX, value)
			  << "\nBinary: " << binarySearch(nums, MAX, value) << std::endl;

	return 0;
}

int linearSearch(int arr[], int size, int v)
{
	for (int i = 0; i < size; i++)
		if (arr[i] == v)
			return i + 1;
}

int binarySearch(int arr[], int size, int v)
{
	int first = 0,
		last = size - 1,
		middle = 0,
		count = 0;

	while (first <= last)
	{
		count++;
		middle = (first + last) / 2;

		if (arr[middle] == v)
			return count;
		else if (arr[middle] > v)
			last = middle - 1;
		else
			first = middle + 1;
	}
}
