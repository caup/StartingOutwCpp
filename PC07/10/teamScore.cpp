#include <iostream>
#include "teamScore.h"

void teamScore::updateWins()
{
	wins++;
	std::cout << "Wins incremented!" << std::endl;
}

void teamScore::updateLosses()
{
	losses++;
	std::cout << "Losses incremented!" << std::endl;
}

void teamScore::updateTies()
{
	ties++;
	std::cout << "Ties incremented!" << std::endl;
}

void teamScore::displayRecord()
{
	std::cout << '\n' << teamName << '\n'
		<< "Wins: " << wins << '\n'
		<< "Losses: " << losses << '\n'
		<< "Ties: " << ties << '\n'
		<< "Points: " << wins * 3 + losses * 0 + ties << std::endl;
}
