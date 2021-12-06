// Roman Numeral Converter
#include <iostream>
#include <string>

using std::string;

int main()
{
    int userInput;
    string romanNumerals[21] = { "", "I", "II", "III", "IV",
                                "V", "VI", "VII", "VIII", "IX",
                                "X", "XI", "XII", "XIII", "XIV",
                                "XV", "XVI", "XVII", "XVII", "XIX", "XX" };

    std::cout << "Enter a number and it will be converted\n"
        << " to a Roman Numeral. Enter 0 to exit.\n";
    do
    {
        std::cin >> userInput;
        std::cout << romanNumerals[userInput] << "\n";
    } while (userInput != 0);

    return 0;
}