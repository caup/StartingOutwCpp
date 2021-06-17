#include <iostream>
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

	std::cout << std::fixed << std::showpoint << std::setprecision(2) << std::endl;

	std::cout << "~*~ Savings Account Balance:\n";
	std::cout << "Starting Balance:" << std::setw(7) << "$" << showBalance << std::endl;
	std::cout << "Total Deposits:" << std::setw(9) << "$" << totalDeposit << std::endl;
	std::cout << "Total Withdrawals:" << std::setw(6) << "$" << totalWithdrawal << std::endl;
	std::cout << "Total Interest:" << std::setw(9) << "$" << totalInterest << std::endl;
	std::cout << "Final Balance:" << std::setw(10) << "$" << balance << std::endl;

	return 0;
}