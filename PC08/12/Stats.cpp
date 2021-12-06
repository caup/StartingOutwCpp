#include "Stats.h"

Stats::Stats()
{
    currentValues = 0;
}

Stats::~Stats()
{
}

double Stats::total()
{
    double total = 0;
    for (int i = 0; i < currentValues; i++)
    {
        total += rainfall[i];
    }
    return total;
}

double Stats::average()
{
    double total = Stats::total();
    return total / currentValues;
}

double Stats::lowest()
{
    double lowest = rainfall[0];
    for (int i = 1; i < currentValues; i++)
    {
        if (lowest > rainfall[i])
        {
            lowest = rainfall[i];
        }
    }
    return lowest;
}

double Stats::highest()
{
    double highest = rainfall[0];
    for (int i = 1; i < currentValues; i++)
    {
        if (highest < rainfall[i])
        {
            highest = rainfall[i];
        }
    }
    return highest;
}

bool Stats::storeValue(double val)
{
    if (currentValues < 30)
    {
        rainfall[currentValues] = val;
        currentValues++;

        return true;
    }
    return false;
}
