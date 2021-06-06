//1.1 Candy Bar Sales

#include <iostream>

using namespace std;

int main()
{
	int AmountSold,
		PricePer,
		AmountEarned;

	cout << "How many candy bars were sold? ";
	cin >> AmountSold;
	cout << "Price per candy bar? ";
	cin >> PricePer;

	AmountEarned = PricePer * AmountSold;

	cout << "Total earned: " << AmountEarned;
}