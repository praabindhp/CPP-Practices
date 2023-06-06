#include <iostream>

using namespace std;

int main()
{
    int temp = 100;
    if (temp < 60)
        cout << "Cold" << endl;

    else if (temp < 90)
        cout << "Warm" << endl;

    else
        cout << "Hot" << endl;
    return 0;
}