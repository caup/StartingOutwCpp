//Using Files--Savings Account Balance Modification
#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
	double balance, startBalance, showBalance, avgBalance,
		annualRate, deposit, withdrawl, interest,
		totalWithdrawal = 0, totalInterest = 0, totalDeposit = 0;

	std::cout << "Enter the starting balance: ";
	std::cin >> balance;
	std::cout << "Enter the annual interest rate: ";
	std::cin >> annualRate;

	showBalance = balance;

	for (int month = 1; month <= 3; month++)
	{
		startBalance = balance;

		do
		{
			std::cout << "How much was deposited during month " << month << "? ";
			std::cin >> deposit;

		} while (deposit < 0);

		totalDeposit += deposit;
		balance += deposit;

		do
		{
			std::cout << "How much was withdrawn during month " << month << "? ";
			std::cin >> withdrawl;

		} while (withdrawl < 0 && withdrawl < balance);

		totalWithdrawal += withdrawl;
		balance -= withdrawl;

		avgBalance = (startBalance + balance) / 2;
		annualRate /= 100;
		interest = avgBalance * (annualRate / 12);

		totalInterest += interest;
		balance += interest;

	}

	std::ofstream outputFile("Savings.txt");

	outputFile << std::fixed << std::showpoint << std::setprecision(2);

	outputFile << "~*~ Savings Account Balance:\n";
	outputFile << "Starting Balance:" << std::setw(7) << "$" << showBalance << std::endl;
	outputFile << "Total Deposits:" << std::setw(9) << "$" << totalDeposit << std::endl;
	outputFile << "Total Withdrawals:" << std::setw(6) << "$" << totalWithdrawal << std::endl;
	outputFile << "Total Interest:" << std::setw(9) << "$" << totalInterest << std::endl;
	outputFile << "Final Balance:" << std::setw(10) << "$" << balance << std::endl;

	outputFile.close();

	return 0;
}