//Test Average
#include <iostream>
#include <iomanip>

int main()
{
	double score1, score2, score3, score4, score5,
		averageScore;

	std::cout << "Input 5 test scores:" << std::endl;
	std::cin >> score1 >> score2 >> score3 >> score4 >> score5;

	averageScore = (score1 + score2 + score3 + score4 + score5) / 5;

	std::cout << "The average test score is " << std::fixed << std::setprecision(1) << averageScore;

	return 0;
}