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
	int getNameHighest();
	int getNameLowest();

private:
	double statistics[30]{};
	int currentValues;
	int nameHighest;
	int nameLowest;
};

