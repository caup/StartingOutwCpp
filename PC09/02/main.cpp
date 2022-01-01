//Lottery Winners
#include <iostream>

const int SIZE = 10;

bool searchList(const long[], int, long);

int main()
{
	long ticket[SIZE] = { 13579, 26791,	26792, 33445, 55555,
						  62483, 77777,	79422, 85647, 93121 };

	long winningNumber;

	std::cout << "Please enter the 5-digit winning lottery number: ";
	std::cin >> winningNumber;

	if (searchList(ticket, SIZE, winningNumber))
		std::cout << "You have a winning ticket.\n";
	else
		std::cout << "You did not have a winning ticket.\n";

	return 0;
}

bool searchList(const long list[], int numElems, long value)
{
	for (int i = 0; i < numElems; i++)
		if (list[i] == value)
			return true;
	return false;
}