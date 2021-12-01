// Stock Profit
#include <iostream>
#include <iomanip>

double calcProfit(int ns, double pp, double pc, double sp, double sc);

int main()
{
	int numOfShares;
	double PurchasePrice, PurchaseCommission, SalePrice, SaleCommission,
		profit;

	std::cout << "Enter the number of shares: ";
	std::cin >> numOfShares;
	std::cout << "Enter the purchase price: ";
	std::cin >> PurchasePrice;
	std::cout << "Enter the purchase commission: ";
	std::cin >> PurchaseCommission;
	std::cout << "Enter the sale price: ";
	std::cin >> SalePrice;
	std::cout << "Etner the sale commission: ";
	std::cin >> SaleCommission;

	profit = calcProfit(numOfShares, PurchasePrice, PurchaseCommission, SalePrice, SaleCommission);

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "The profit/loss is: $" << profit;

	return 0;
}

double calcProfit(int ns, double pp, double pc, double sp, double sc)
{
	return ((ns * sp) - sc) - ((ns * pp) + pc);
}
