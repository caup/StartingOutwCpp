// Lowest Score Drop
#include <iostream>

void getScore(int& score);
void calcAverage(int s1, int s2, int s3, int s4, int s5);
int findLowest(int s1, int s2, int s3, int s4, int s5);

int main()
{
	int score1, score2, score3, score4, score5;

	getScore(score1);
	getScore(score2);
	getScore(score3);
	getScore(score4);
	getScore(score5);

	calcAverage(score1, score2, score3, score4, score5);

	return 0;
}

void getScore(int& score)
{
	static int testCount = 1;

	do
	{
		std::cout << "Enter score for test #" << testCount << ": ";
		std::cin >> score;

	} while (score < 0 || score > 100);

	testCount++;
}

void calcAverage(int s1, int s2, int s3, int s4, int s5)
{
	int lowest = findLowest(s1, s2, s3, s4, s5);

	int average = (s1 + s2 + s3 + s4 + s5 - lowest) / 4;

	std::cout << "The lowest score " << lowest << " was dropped\n"
		<< "The average of the 4 highest scores is " << average << std::endl;
}

int findLowest(int s1, int s2, int s3, int s4, int s5)
{
	int lowest = s1;

	if (lowest > s2)
	{
		lowest = s2;
	}
	if (lowest > s3)
	{
		lowest = s3;
	}
	if (lowest > s4)
	{
		lowest = s4;
	}
	if (lowest > s5)
	{
		lowest = s5;
	}

	return lowest;
}
