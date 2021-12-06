#include "TestGrader.h"

TestGrader::TestGrader()
{
}

TestGrader::~TestGrader()
{
}

void TestGrader::setKey(std::string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        answers[i] = s[i];
    }
}

std::string TestGrader::grade(char arr[], int size)
{
    int totalWrong = 0;
    int wrongQs[20] = {};

    for (int i = 0; i < size; i++)
    {
        if (!(arr[i] == answers[i]))
        {
            wrongQs[totalWrong] = i + 1;
            totalWrong++;
        }
    }
}
