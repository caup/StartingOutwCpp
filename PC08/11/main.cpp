// Chips and Salsa Version 2
#include <iostream>
#include <string>
#include "Product.h"

using std::string;

const int SIZE = 5;

string findHighest(Product arr[]);
string findLowest(Product arr[]);

int main()
{
    Product salsa[SIZE] = { Product("Mild", 0),
                            Product("Medium", 0),
                            Product("Sweet", 0),
                            Product("Hot", 0),
                            Product("Zesty", 0) };
    string highest, lowest;
    int totalSold = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cout << salsa[i].getSalsaName() << " salsa jars sold: ";
        salsa[i].setJarsSold();
        totalSold += salsa[i].getQuantity();
    }

    highest = findHighest(salsa);
    lowest = findLowest(salsa);

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << salsa[i].getSalsaName() << ": " << salsa[i].getQuantity() << " sold.\n";
    }
    std::cout << "Total sold: " << totalSold << "\n";
    std::cout << "Best seller: " << highest;
    std::cout << "\nWorst seller: " << lowest << std::endl;

    return 0;
}

string findHighest(Product arr[])
{
    int tHighest = arr[0].getQuantity();
    string sHighest = arr[0].getSalsaName();
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i].getQuantity() > tHighest)
        {
            tHighest = arr[i].getQuantity();
            sHighest = arr[i].getSalsaName();
        }
    }
    return sHighest;
}

string findLowest(Product arr[])
{
    int tLowest = arr[0].getQuantity();
    string sLowest = arr[0].getSalsaName();
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i].getQuantity() < tLowest)
        {
            tLowest = arr[i].getQuantity();
            sLowest = arr[i].getSalsaName();
        }
    }
    return sLowest;
}
