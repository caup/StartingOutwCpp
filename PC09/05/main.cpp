//Hit the Slopes
#include <iostream>
#include <iomanip>
#include <string>

using std::string;

const int SIZE = 7;

struct Snow {
    int date;
    double base;
};

void sortSnow(Snow[], int);
void swapDouble(double&, double&);
void displayReport(Snow[], int, string);

int main()
{
    string month;
    int day1 = 0, day2 = 0;
    Snow fall[SIZE]{};

    std::cout << "Enter the name of the month: ";
    std::cin >> month;
    
    do {
        std::cout << "Enter the start and end date of the seven-day period: ";
        std::cin >> day1 >> day2;
    } while (!(day2 - day1 == 7));

    for (int i = 0; i < 7; i++)
    {
        fall[i].date = day1 + i;
        std::cout << "Day " << fall[i].date << " snow depth: ";
        std::cin >> fall[i].base;
    }

    sortSnow(fall, SIZE);
    displayReport(fall, SIZE, month);

    return 0;
}

void sortSnow(Snow arr[], int max)
{
    bool madeAswap = true;
    for (int i = max - 1; i > 0 && madeAswap; i--)
    {
        madeAswap = false;
        for (int j = 0; j < i; j++)
            if (arr[j].base > arr[j + 1].base)
            {
                swapDouble(arr[j].base, arr[j + 1].base);
                madeAswap = true;
            }
    }
}

void swapDouble(double &a, double &b)
{
    double tmp = a;
    a = b;
    b = tmp;
}

void displayReport(Snow arr[], int max, string s)
{
    std::cout << "\nSnow Report " << s << ' ' << arr[0].date << " - " << arr[max - 1].date;
    std::cout << "\nDate" << std::setw(5) << "Base";
    for (int i = 0; i < max; i++)
    {
        std::cout << "\n" << arr[i].date << std::setw(7) << arr[i].base;
    }
}
