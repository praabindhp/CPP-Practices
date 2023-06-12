#include <iostream>

using namespace std;

int linearSearch(int numbers[], int size, int x)
{
    for (int i = 0; i < size; i++)
        if (numbers[i] == x)
        {
            return i;
        }
    return -1;
}

int main()
{
    int numbers[] = {1, 2, 5, 7, 9, 11, 15};
    int size = sizeof(numbers) / sizeof(int);
    int x = 15;

    cout << linearSearch(numbers, size, x) << endl;
    return 0;
}