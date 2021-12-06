// Monkey Business
#include <iostream>

const int MONKEYS = 3,
DAYS = 7;

double getAverage(double arr[][DAYS]);
double findLeast(double arr[][DAYS]);
double findGreatest(double arr[][DAYS]);

int main()
{
    double monkeyDiet[MONKEYS][DAYS];
    double average, least, greatest;

    for (int i = 0; i < MONKEYS; i++)
    {
        for (int j = 0; j < DAYS; j++)
        {
            std::cout << "Enter the lbs of food eaten by monkey #" << i + 1 << " on day #" << j + 1 << ": ";
            std::cin >> monkeyDiet[i][j];
        }
    }

    average = getAverage(monkeyDiet);
    least = findLeast(monkeyDiet);
    greatest = findGreatest(monkeyDiet);

    std::cout << "\nAverage lbs of food eaten: " << average;
    std::cout << "\nLeast amount eaten: " << least;
    std::cout << "\nGreatest amount eaten: " << greatest << std::endl;

    return 0;
}

double getAverage(double arr[][DAYS])
{
    double total = 0;
    for (int i = 0; i < MONKEYS; i++)
    {
        for (int j = 0; j < DAYS; j++)
        {
            total += arr[i][j];
        }
    }

    return total / DAYS;
}

double findLeast(double arr[][DAYS])
{
    double tLeast = arr[0][0];
    for (int i = 0; i < MONKEYS; i++)
    {
        for (int j = 0; j < DAYS; j++)
        {
            if (arr[i][j] < tLeast)
            {
                tLeast = arr[i][j];
            }
        }
    }

    return tLeast;
}

double findGreatest(double arr[][DAYS])
{
    double tGreatest = arr[0][0];
    for (int i = 0; i < MONKEYS; i++)
    {
        for (int j = 0; j < DAYS; j++)
        {
            if (arr[i][j] > tGreatest)
            {
                tGreatest = arr[i][j];
            }
        }
    }

    return tGreatest;
}
