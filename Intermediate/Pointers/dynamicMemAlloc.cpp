#include <iostream>

using namespace std;

int main()
{   // Stack Storage
    // int numbers[10];

    // Heap Storage
    int *numbers = new int[10];
    int *number = new int;

    delete number;
    delete[] numbers;

    number = nullptr;
    numbers = nullptr;

    return 0;
}