// Larger Than n
#include <iostream>

void greaterThanN(int arr[], int size, int n);

int main()
{
    int n = 5;
    const int size = 10;
    int numbers[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    greaterThanN(numbers, size, n);
}

void greaterThanN(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > n)
        {
            std::cout << arr[i] << "\n";
        }
    }
}