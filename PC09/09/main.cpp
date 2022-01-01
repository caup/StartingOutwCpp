//Descending Sort Benchmarks
#include <iostream>

const int ROWS = 20;
const int COLS = 2;

void populateArray(int[][COLS]);
int bubbleCount(int[][COLS]);
int selectionCount(int[][COLS]);
void swap(int&, int&);

int main()
{
	int nums[ROWS][COLS]{};
	int sCount, bCount;

	populateArray(nums);

	std::cout << "Unsorted array:\n";
	for (int i = 0; i < ROWS; i++)
	{
		std::cout << nums[i][0];
		if (i < ROWS - 1)
			std::cout << ", ";
	}

	sCount = selectionCount(nums);
	bCount = bubbleCount(nums);

	std::cout << "\nSorted array:\n";
	for (int j = 0; j < ROWS; j++)
	{
		std::cout << nums[j][0];
		if (j < ROWS - 1)
			std::cout << ", ";
	}

	std::cout << "\nSelection sort swaps: " << sCount;
	std::cout << "\nBubble sort swaps: " << bCount << std::endl;
}

void populateArray(int arr[][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		arr[i][0] = (rand() % 50) + 1;
		arr[i][1] = arr[i][0];
	}
}

int bubbleCount(int arr[][COLS])
{
	int count = 0;
	bool swapped = true;

	for (int max = ROWS - 1; max > 0 && swapped; max--)
	{
		swapped = false;
		for (int index = 0; index < max; index++)
		{
			if (arr[index][1] < arr[index + 1][1])
			{
				swap(arr[index][1], arr[index + 1][1]);
				swapped = true;
				count++;
			}
		}
	}
	return count;
}

int selectionCount(int arr[][COLS])
{
	int minIndex, minValue, count = 0;

	for (int start = 0; start < (ROWS - 1); start++)
	{
		minIndex = start;
		minValue = arr[start][0];

		for (int index = start + 1; index < ROWS; index++)
		{
			if (arr[index][0] > minValue)
			{
				minValue = arr[index][0];
				minIndex = index;
			}
		}
		swap(arr[minIndex][0], arr[start][0]);
		count++;
	}
	return count;
}

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
