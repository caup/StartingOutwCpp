// Chips and Salsa
#include <iostream>
#include <string>

using std::string;

const int SIZE = 5;

string findHighest(int arr[], string sarr[]);
string findLowest(int arr[], string sarr[]);

int main()
{
    string salsa[SIZE] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
    string highest, lowest;
    int jarsSold[SIZE];
    int totalSold = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cout << salsa[i] << " salsa jars sold: ";
        std::cin >> jarsSold[i];
        totalSold += jarsSold[i];
    }

    highest = findHighest(jarsSold, salsa);
    lowest = findLowest(jarsSold, salsa);

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << salsa[i] << ": " << jarsSold[i] << " sold.\n";
    }
    std::cout << "Total sold: " << totalSold << "\n";
    std::cout << "Best seller: " << highest;
    std::cout << "\nWorst seller: " << lowest << std::endl;

    return 0;
}

string findHighest(int arr[], string sarr[])
{
    int tHighest = arr[0];
    string sHighest = sarr[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] > tHighest)
        {
            tHighest = arr[i];
            sHighest = sarr[i];
        }
    }
    return sHighest;
}

string findLowest(int arr[], string sarr[])
{
    int tLowest = arr[0];
    string sLowest = sarr[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] < tLowest)
        {
            tLowest = arr[i];
            sLowest = sarr[i];
        }
    }
    return sLowest;
}