#pragma once
class Stats
{
public:
	Stats();
	~Stats();

	double total();
	double average();
	double lowest();
	double highest();
	bool storeValue(double val);

private:
	double rainfall[30] = { };
	int currentValues;
};

