// Star Search
#include <iostream>
#include <iomanip>

double getJudgeData();
double calcScore(double s1, double s2, double s3, double s4, double s5);
int findLowest(double s1, double s2, double s3, double s4, double s5);
int findHighest(double s1, double s2, double s3, double s4, double s5);

int main()
{
	double score1 = getJudgeData(),
		score2 = getJudgeData(),
		score3 = getJudgeData(),
		score4 = getJudgeData(),
		score5 = getJudgeData();

	double average = calcScore(score1, score2, score3, score4, score5);

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "The average is " << average << std::endl;

	return 0;
}

double getJudgeData()
{
	double score;
	static int counter = 1;

	do
	{
		std::cout << "Enter score #" << counter << ": ";
		std::cin >> score;

	} while (score < 0 || score > 10);

	counter++;

	return score;
}

double calcScore(double s1, double s2, double s3, double s4, double s5)
{
	int lowest = findLowest(s1, s2, s3, s4, s5);
	int highest = findHighest(s1, s2, s3, s4, s5);

	double average = (s1 + s2 + s3 + s4 + s5 - lowest - highest) / 3;

	return average;
}

int findLowest(double s1, double s2, double s3, double s4, double s5)
{
	double lowest = s1;

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

int findHighest(double s1, double s2, double s3, double s4, double s5)
{
	double highest = s1;

	if (highest < s2)
	{
		highest = s2;
	}
	if (highest < s3)
	{
		highest = s3;
	}
	if (highest < s4)
	{
		highest = s4;
	}
	if (highest < s5)
	{
		highest = s5;
	}

	return highest;
}