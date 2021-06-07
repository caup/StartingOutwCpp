//Mobile Service Provider
#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	const double A_COST = 39.99,
		A_ADD_COST = 8,
		A_GB = 2,
		B_COST = 59.99,
		B_ADD_COST = 8,
		B_GB = 8,
		C_COST = 79.99;

	double aMonthlyBill, bMonthlyBill, cMonthlyBill, gbUsed, 
		aToB, aToC, bToC;

	std::string custName;
	char plan;

	std::cout << "*** Mobile Phone Bill ***\n"
			  << "* Enter your name: ";
	getline(std::cin, custName);
	std::cout << "* Enter your plan: ";
	std::cin >> plan;
	std::cout << "* Enter GB used:   ";
	std::cin >> gbUsed;
	std::cout << "*************************\n";

	//Calculate monthly bill for each plan
	aMonthlyBill = gbUsed > 2 ? 
					A_COST + ((gbUsed - A_GB) * A_ADD_COST) : A_COST;
	bMonthlyBill = gbUsed > 8 ? 
					B_COST + ((gbUsed - B_GB) * B_ADD_COST) : B_COST;
	cMonthlyBill = C_COST;

	switch (plan)
	{
	case 'a':
	case 'A':				
		std::cout << "Customer Name: " << custName << std::endl;
		std::cout << "Total Amt Due: " << aMonthlyBill << std::endl;
		
		if (aMonthlyBill > bMonthlyBill)
		{
			aToB = aMonthlyBill - bMonthlyBill;
			std::cout << std::fixed << std::showpoint << std::setprecision(2);
			std::cout << "Savings switching to plan B: " << aToB << std::endl;
		}
		if (aMonthlyBill > cMonthlyBill)
		{
			aToC = aMonthlyBill - cMonthlyBill;
			std::cout << std::fixed << std::showpoint << std::setprecision(2);
			std::cout << "Savings switching to plan C: " << aToC << std::endl;
		}
		break;
	case 'b':
	case 'B':
		std::cout << "Customer Name: " << custName << std::endl;
		std::cout << "Total Amt Due: " << bMonthlyBill << std::endl;

		if (bMonthlyBill > cMonthlyBill)
		{
			bToC = bMonthlyBill - cMonthlyBill;
			std::cout << std::fixed << std::showpoint << std::setprecision(2);
			std::cout << "Savings switching to plan C: " << bToC << std::endl;
		}
		break;
	case 'c':
	case 'C':
		std::cout << "Customer Name: " << custName << std::endl;
		std::cout << "Total Amt Due: " << cMonthlyBill << std::endl;
		break;
	}

	return 0;
}