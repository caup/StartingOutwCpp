#pragma once
#include <string>

class TestGrader
{
public:
    TestGrader();
    ~TestGrader();
    void setKey(std::string s);
    std::string grade(char arr[], int size);
private:
    char answers[20] = {};
};
