//Lottery Winners Modification
#include <iostream>

const int SIZE = 10;

bool ticketSearch(long[], int, int);

int main()
{
    long tickets[SIZE] = { 13579, 26791, 26792, 33445, 55555,
                           62483,	77777, 79422,	85647, 93121 };
    long winningNumber;

    std::cout << "Enter a lottery ticket number: ";
    std::cin >> winningNumber;

    if (ticketSearch(tickets, SIZE, winningNumber))
        std::cout << "You have a winning number!\n";
    else
        std::cout << "You do not have a winning number.\n";

    return 0;
}

bool ticketSearch(long arr[], int numElems, int value)
{
    int first = 0;
    int mid;
    int last = numElems - 1;

    while (first <= last)
    {
        mid = (first + last) / 2;

        if (arr[mid] == value)
            return true;
        else if (arr[mid] > value)
            last = mid - 1;
        else
            first = mid + 1;
    }

    return false;
}