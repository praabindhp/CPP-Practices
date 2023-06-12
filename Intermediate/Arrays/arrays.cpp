#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {10, 20};
    // numbers[0] = 10;
    // numbers[4] = 20;

    for (int i=0; i < size(numbers); i++)
        cout << numbers[i] << endl;

    return 0;
}