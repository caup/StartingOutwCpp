// Baseball Champions
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::string;
using std::vector;

void readToVector(vector<string>& vect, string file);
int findWins(vector<string>& vect);

int main()
{
	vector<string> teams;
	vector<string> winners;

	readToVector(teams, "Teams.txt");
	readToVector(winners, "WorldSeriesWinners.txt");

	for (auto& i : teams)
	{
		std::cout << i << "\n";
	}

	std::cout << "\nWins: " << findWins(winners) << std::endl;

	return 0;
}

void readToVector(vector<string>& vect, string file)
{
	string input;
	std::ifstream inputFile(file);
	if (!inputFile)
	{
		std::cout << "Error opening file\n";
	}

	while (std::getline(inputFile, input))
	{
		vect.push_back(input);
	}

	inputFile.close();
}

int findWins(vector<string>& vect)
{
	int wins = 0;
	string input;
	std::cout << "\nEnter a team name from above to find # of World Series wins: ";
	std::getline(std::cin, input);

	for (auto& i : vect)
	{
		if (input == i)
		{
			wins++;
		}
	}

	return wins;
}
