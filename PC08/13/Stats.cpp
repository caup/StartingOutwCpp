#include "Stats.h"

Stats::Stats()
{
    currentValues = 0;
    nameHighest = 0;
    nameLowest = 0;
}

Stats::~Stats()
{
}

double Stats::total()
{
    double total = 0;
    for (int i = 0; i < currentValues; i++)
    {
        total += statistics[i];
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
    double lowest = statistics[0];
    Stats::nameLowest = 0;
    for (int i = 1; i < currentValues; i++)
    {
        if (lowest > statistics[i])
        {
            lowest = statistics[i];
            nameLowest = i;
        }
    }
    return lowest;
}

double Stats::highest()
{
    double highest = statistics[0];
    Stats::nameHighest = 0;
    for (int i = 1; i < currentValues; i++)
    {
        if (highest < statistics[i])
        {
            highest = statistics[i];
            nameHighest = i;
        }
    }
    return highest;
}

bool Stats::storeValue(double val)
{
    if (currentValues < 30)
    {
        statistics[currentValues] = val;
        currentValues++;

        return true;
    }
    return false;
}

int Stats::getNameHighest()
{
    return nameHighest;
}

int Stats::getNameLowest()
{
    return nameLowest;
}
