// Movie Profit
#include <iostream>

using std::string;

struct MovieData
{
	string title,
		director;
	int releaseYear,
		runningTime;
	double productionCost,
		firstYrRevenue;

	MovieData(string t, string d, int rY, int rT, double pC, double fYr)
	{
		title = t, director = d, releaseYear = rY, runningTime = rT,
		productionCost = pC, firstYrRevenue = fYr;
	}
};

void printMovieData(const MovieData& movie)
{
	std::cout << movie.title << '\n'
		<< movie.director << '\n'
		<< movie.releaseYear << '\n'
		<< movie.runningTime << " hrs" << '\n' << std::fixed
		<< movie.firstYrRevenue - movie.productionCost << std::endl;
}

int main()
{
	MovieData mov1 = { "The Matrix", "Wachoski Brothers", 2001, 2, 1.5E6, 2.5E7 },
		mov2 = { "The Titanic", "Steven Spielberg", 2003, 15, 2.5E7, 1.5E6 };

	printMovieData(mov1);
	std::cout << '\n';
	printMovieData(mov2);

	return 0;
}