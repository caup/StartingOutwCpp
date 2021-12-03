// Movie Data
#include <iostream>

using std::string;

struct MovieData
{
	string title,
		   director;
	int releaseYear,
		runningTime;

	MovieData(string t, string d, int rY, int rT)
	{
		title = t, director = d, releaseYear = rY, runningTime = rT;
	}
};

void printMovieData(MovieData movie)
{
	std::cout << movie.title << '\n'
		<< movie.director << '\n'
		<< movie.releaseYear << '\n'
		<< movie.runningTime << " hrs" << std::endl;
}

int main()
{
	MovieData mov1 = { "The Matrix", "Wachoski Brothers", 2001, 2 },
			  mov2 = { "The Titanic", "Steven Spielberg", 2003, 15 };

	printMovieData(mov1);
	std::cout << '\n';
	printMovieData(mov2);

	return 0;
}