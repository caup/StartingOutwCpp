//Batting averages
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <ios>

using std::string;

const int SIZE = 12;

struct Player {
    string name;
    double batAvg;
};

void inputData(Player[], int);
void sortData(Player[], int);
void swap(double&, double&);
void displayReport(Player[], int);

int main()
{
    Player p[SIZE];

    inputData(p, SIZE);
    sortData(p, SIZE);
    displayReport(p, SIZE);

    return 0;
}

void inputData(Player arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        std::cout << "Player " << i + 1 << "'s name: ";
        std::getline(std::cin, arr[i].name);
        std::cout << "Player " << i + 1 << "'s batting avg: ";
        std::cin >> arr[i].batAvg;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void sortData(Player arr[], int s)
{
    bool madeAswap = true;
    for (int i = s - 1; i > 0 && madeAswap; i--)
    {
        madeAswap = false;
        for (int j = 0; j < i; j++)
            if (arr[j].batAvg > arr[j + 1].batAvg)
            {
                swap(arr[j].batAvg, arr[j + 1].batAvg);
                madeAswap = true;
            }
    }
}

void swap(double& a, double& b)
{
    double tmp = a;
    a = b;
    b = tmp;
}

void displayReport(Player arr[], int s)
{
    std::cout << std::endl;
    std::cout << "Player name:        Batting Avg:";
    for (int i = 0; i < s; i++)
        std::cout << "\n" << arr[i].name << std::setw(10) << arr[i].batAvg;
    std::cout << std::endl;
}