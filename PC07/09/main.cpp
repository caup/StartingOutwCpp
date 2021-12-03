// Corporate Sales Data
#include <iostream>
#include <iomanip>

using std::string;

struct CorpData
{
	string divisionName;
	double qtr1sales,
		qtr2sales,
		qtr3sales,
		qtr4sales;

	CorpData(string div, double q1, double q2, double q3, double q4)
	{
		divisionName = div;
		qtr1sales = q1, qtr2sales = q2, qtr3sales = q3, qtr4sales = q4;
	}
};

void computeSales(const CorpData& div)
{
	std::cout << "Division: " << div.divisionName << '\n'
		<< std::fixed << std::setprecision(2)
		<< "Q1: $" << div.qtr1sales << '\n'
		<< "Q2: $" << div.qtr2sales << '\n'
		<< "Q3: $" << div.qtr3sales << '\n'
		<< "Q4: $" << div.qtr4sales << '\n'
		<< "Avg: $" << (div.qtr1sales + div.qtr2sales + div.qtr3sales + div.qtr4sales) / 4
		<< '\n' << std::endl;
}

int main()
{
	CorpData div1{ "North", 89424.88, 68069.51, 82779.20, 93641.15 },
			 div2{ "East", 68230.67, 65336.48, 51684.80, 57007.97 },
			 div3{ "South", 75033.34, 75909.16, 85974.03, 51615.15 },
			 div4{ "West", 84058.96, 64850.44, 99792.11, 71193.42 };

	computeSales(div1);
	computeSales(div2);
	computeSales(div3);
	computeSales(div4);

	return 0;
}