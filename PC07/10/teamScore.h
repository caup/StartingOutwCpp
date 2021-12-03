#pragma once
#include <string>

using std::string;

class teamScore
{
public:
	teamScore(string name);
	~teamScore();

	void updateWins();
	void updateLosses();
	void updateTies();

	void displayRecord();

private:
	string teamName;
	int wins,
		losses,
		ties;
};

inline teamScore::teamScore(string name)
{
	teamName = name;
	wins = 0, losses = 0, ties = 0;
}

inline teamScore::~teamScore()
{
}

