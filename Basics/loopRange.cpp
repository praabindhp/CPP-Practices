#include <iostream>

using namespace std;

int main()
{
    int arrRan[] = {1, 2, 3, 4};
    for (int i = 0; i < sizeof(arrRan) / sizeof(int); i++)
        cout << arrRan[i] << endl;
}