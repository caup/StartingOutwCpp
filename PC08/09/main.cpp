// Lo Shu Magic Square
#include <iostream>

bool isMagicSquare(int arr[][3], int size);

int main()
{
	int magicSquare[3][3] = { {4, 9, 2},
							  {3, 5, 7},
							  {8, 1, 6} };
	
	int unmagicSquare[3][3] = { {1, 2, 3},
								{4, 5, 6},
								{7, 8, 9} };

	if (isMagicSquare(magicSquare, 3))
	{
		std::cout << "It is a magic square!\n";
	}
	else
	{
		std::cout << "It is not a magic square!\n";
	}

	return 0;
}

bool isMagicSquare(int arr[][3], int size)
{
	int row1 = 0, row2 = 0, row3 = 0,
		col1 = 0, col2 = 0, col3 = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] < 1 || arr[i][j] > 9)
			{
				return false;
			}

			if (i == 0)
			{
				row1 += arr[0][j];
			}
			else if (i == 1)
			{
				row2 += arr[1][j];
			}
			else if (i == 2)
			{
				row3 += arr[2][j];
			}

			if (j == 0)
			{
				col1 += arr[i][0];
			}
			else if (j == 1)
			{
				col2 += arr[i][1];
			}
			else if (j == 2)
			{
				col3 += arr[i][2];
			}
		}
	}

	if (row1 != 15 || row2 != 15 || row3 != 15)
	{
		return false;
	}
	if (col1 != 15 || col2 != 15 || col3 != 15)
	{
		return false;
	}

	return true;
}
