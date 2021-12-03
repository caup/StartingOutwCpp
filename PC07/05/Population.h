#pragma once

class Population
{
public:
	Population();
	Population(int pop, int births, int deaths);
	~Population();

	void setPopulation();
	void setBirths();
	void setDeaths();

	double getBirthRate();
	double getDeathRate();

private:
	int population,
		annualBirths,
		annualDeaths;
};

inline Population::Population()
{
}
inline Population::~Population()
{
}