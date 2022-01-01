//Sorting Orders
#include <iostream>

void bubbleSortAndShow(int[], int);
void selectionSortAndShow(int[], int);
void swap(int&, int&);

int main()
{
	int randomOne[8] = { 5, 2, 7, 4 , 6, 1, 0, 3 },
		randomTwo[8] = { 5, 2, 7, 4 , 6, 1, 0, 3 };

	std::cout << "Unsorted array:\n";
	for (int i = 0; i < 8; i++)
	{
		std::cout << randomOne[i];
		if (i < 7)
			std::cout << ", ";
	}

	std::cout << "\n\nBubble sort in action:";
	bubbleSortAndShow(randomOne, 8);

	std::cout << "\n\nSelection sort in action:";
	selectionSortAndShow(randomTwo, 8);

	return 0;
}

void bubbleSortAndShow(int arr[], int size)
{
	int pass = 0;
	bool swapped = true;

	for (int max = size - 1; max > 0 && swapped; max--)
	{
		swapped = false;
		for (int index = 0; index < max; index++)
		{
			if (arr[index] > arr[index + 1])
			{
				swap(arr[index], arr[index + 1]);
				swapped = true;
			}
		}
		pass++;
		std::cout << "\nPass " << pass << ": ";
		for (int j = 0; j < size; j++)
		{
			std::cout << arr[j];
			if (j < size - 1)
				std::cout << ", ";
		}
	}
}

void selectionSortAndShow(int arr[], int size)
{
	int pass = 0;
	int minIndex, minValue;

	for (int start = 0; start < size - 1; start++)
	{
		minIndex = start;
		minValue = arr[start];

		for (int index = start + 1; index < size; index++)
		{
			if ( arr[index] < minValue)
			{
				minValue = arr[index];
				minIndex = index;
			}
		}
		swap(arr[minIndex], arr[start]);
		pass++;
		std::cout << "\nPass " << pass << ": ";
		for (int j = 0; j < size; j++)
		{
			std::cout << arr[j];
			if (j < size - 1)
				std::cout << ", ";
		}
	}
}

void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
