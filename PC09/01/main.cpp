// Charge Account Validation
#include <iostream>

const int MAX = 18;

bool linearSearchValidation(int arr[MAX], int acc);

int main()
{
	int chargeAccounts[MAX] = { 5658845, 4520125, 7895122, 8777541,	8451277, 1302850,
								8080152, 4562555, 5552012, 5050552,	7825877, 1250255,
								1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };
	int accountNumber;

	std::cout << "Enter an account #: ";
	std::cin >> accountNumber;

	if (linearSearchValidation(chargeAccounts, accountNumber))
		std::cout << "Valid number.\n";
	else
		std::cout << "Invalid number.\n";

	return 0;
}

bool linearSearchValidation(int arr[MAX], int acc)
{
	for (int i = 0; i < MAX; i++)
		if (arr[i] == acc)
			return true;
	return false;
}
