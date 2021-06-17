/* Video Game Levels
A novice player needed 78 minutes to complete Level 1 and 144 minutes to complete Level 2 of a new
video game. Write a program that computes and displays in hours and minutes the amount of time each
level took and that tells how much longer it took the player to complete Level 2 than Level 1. */
#include <iostream>

int main()
{
	int level1 = 78,
		l1hr = level1 / 60,
		l1min = level1 % 60,

		level2 = 144,
		l2hr = level2 / 60,
		l2min = level2 % 60,

		levelDifference = level2 - level1,
		lDhr = levelDifference / 60,
		lDmin = levelDifference % 60;

	std::cout << "Level 1 took " << l1hr << " hours and " << l1min << " mins.\n";
	std::cout << "Level 2 took " << l2hr << " hours and " << l2min << " mins.\n";
	std::cout << "The difference between levels was " << lDhr << " hours and " << lDmin << " mins.";


}