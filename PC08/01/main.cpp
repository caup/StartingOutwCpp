// Perfect Scores
#include <iostream>

void getScores(int arr[], int& count);
int countPerfect(int arr[], int count);

int main()
{
	int scores[20];
	int count = 0,
		perfect;

	getScores(scores, count);
	perfect = countPerfect(scores, count);

	std::cout << "\n\nNumber of perfect scores: " << perfect << std::endl;

	return 0;
}

void getScores(int arr[], int& count)
{
	std::cout << "Max 20. Range 0 - 100. An invalid entry will continue the program.\n";

	for (int i = 0; i < 20; i++)
	{
		std::cout << "Enter score " << i + 1 << ": ";
		std::cin >> arr[i];
		count++;
		
		if (arr[i] < 0 || arr[i] > 100)
		{
			count--;
			break;
		}
	}
}

int countPerfect(int arr[], int count)
{
	int tempPerfect = 0;

	for (int i = 0; i < count; i++)
	{
		if (arr[i] == 100)
		{
			tempPerfect++;
		}
	}
	return tempPerfect;
}
