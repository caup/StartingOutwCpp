// Lottery
#include <iostream>
#include <cstdlib>
#include <ctime>

const int DIGITS = 5;

void setWinningDigits(int arr[]);
void getPlayerDigits(int arr[]);
void compareDigits(int arr1[], int arr2[], int& matches);

int main()
{
	int winningDigits[DIGITS],
		player[DIGITS];
	int matches = 0;

	setWinningDigits(winningDigits);
	getPlayerDigits(player);
	compareDigits(winningDigits, player, matches);

	std::cout << "Winning Numbers: ";
	for (auto i : winningDigits)
	{
		std::cout << i << " ";
	}
	std::cout << "\nPlayers Numbers: ";
	for (auto i : player)
	{
		std::cout << i << " ";
	}
	std::cout << "\nMatches: " << matches << std::endl;

	return 0;
}

void setWinningDigits(int arr[])
{
	srand(time(0));
	for (int i = 0; i < DIGITS; i++)
	{
		arr[i] = rand() % (9 + 1);
	}
}

void getPlayerDigits(int arr[])
{
	std::cout << "Enter 5 digits between 0-9 and separated by spaces: ";
	std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
}

void compareDigits(int arr1[], int arr2[], int& matches)
{
	for (int i = 0; i < DIGITS; i++)
	{
		if (arr1[i] == arr2[i])
		{
			matches++;
		}
	}	
}
