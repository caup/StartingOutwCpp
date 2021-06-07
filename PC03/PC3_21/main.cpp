//Monthly Payments
#include <iostream>
#include <iomanip>

int main()
{
	double loanAmount, monthlyRate, annualRate,
		monthlyPayment, amtPaid, instPaid;
	double numPayments;

	std::cout << "What is the loan amount? ";
	std::cin >> loanAmount;
	std::cout << "Annual interest rate? ";
	std::cin >> annualRate;
	std::cout << "Number of payments? ";
	std::cin >> numPayments;

	annualRate /= 100;
	monthlyRate = annualRate / 12;
	monthlyPayment = ((monthlyRate * pow(1 + monthlyRate, numPayments) / pow(1 + monthlyRate, numPayments) - 1)) * loanAmount;
	amtPaid = (monthlyPayment * numPayments) + loanAmount;
	instPaid = amtPaid - loanAmount;
	monthlyRate *= 100;

	std::cout << std::showpoint << std::fixed << std::setprecision(2);
	std::cout << "Loan Amount:				$" << std::setw(8) << loanAmount << std::endl;
	std::cout << "Monthly Interest Rate:	 " << std::setw(8) << monthlyRate << '%' << std::endl;
	std::cout << "Number of Payments:		 " << std::setw(8) << numPayments << std::endl;
	std::cout << "Monthly Payments:			$" << std::setw(8) << monthlyPayment << std::endl;
	std::cout << "Amount Paid Back:			$" << std::setw(8) << amtPaid << std::endl;
	std::cout << "Interest Paid:			$" << std::setw(8) << instPaid << std::endl;

	return 0;
}