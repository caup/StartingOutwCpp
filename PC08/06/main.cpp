// Rain or Shine
#include <iostream>
#include <iomanip>
#include <fstream>

using std::ifstream;

const int MONTHS = 3,
DAYS = 30;

void readFromFile(char arr[][DAYS]);
int checkWeather(char arr[][DAYS], int month, char c);

int main()
{
    char weather[MONTHS][DAYS];
    int juneR, juneC, juneS,
        julyR, julyC, julyS,
        augustR, augustC, augustS;

    readFromFile(weather);

    for (int i = 0; i < MONTHS; i++)
    {
        if (i == 0)
        {
           juneR = checkWeather(weather, i, 'R');
           juneC = checkWeather(weather, i, 'C');
           juneS = checkWeather(weather, i, 'S');
        }
        if (i == 1)
        {
            julyR = checkWeather(weather, i, 'R');
            julyC = checkWeather(weather, i, 'C');
            julyS = checkWeather(weather, i, 'S');
        }
        if (i == 2)
        {
            augustR = checkWeather(weather, i, 'R');
            augustC = checkWeather(weather, i, 'C');
            augustS = checkWeather(weather, i, 'S');
        }
    }

    std::cout << std::setw(13) << "June" << std::setw(7) << "July" << std::setw(9) << "August" << std::setw(8) << "Total";
    std::cout << "\nRainy:" << std::setw(7) << juneR << std::setw(7) << julyR << std::setw(9) << augustR << std::setw(8) << juneR + julyR + augustR;
    std::cout << "\nCloudy:" << std::setw(6) << juneC << std::setw(7) << julyC << std::setw(9) << augustC << std::setw(8) << juneC + julyC + augustC;
    std::cout << "\nSunny:" << std::setw(7) << juneS << std::setw(7) << julyS << std::setw(9) << augustS << std::setw(8) << juneS + julyS + augustS;
    std::cout << std::endl;
}

void readFromFile(char arr[][DAYS])
{
    ifstream inputFile;
    inputFile.open("RainOrShine.dat");

    for (int i = 0; i < MONTHS; i++)
    {
        for (int j = 0; j < DAYS; j++)
        {
            inputFile >> arr[i][j];
        }
    }

    inputFile.close();
}

int checkWeather(char arr[][DAYS], int month, char c)
{
    int total = 0;
    for (int i = 0; i < DAYS; i++)
    {
        if (arr[month][i] == c)
        {
            total++;
        }
    }
    return total;
}
