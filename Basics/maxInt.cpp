#include <iostream>

using namespace std;

int maxInt(int a, int b)
{
    a > b ? cout << a << " Is Greater Than " << b << endl
          : cout << b << " Is Greater Than " << a << endl;
    return 0;
}

int main()
{
    int a, b;

    cout << "Enter 2 Number : ";
    cin >> a;
    cin >> b;

    maxInt(a, b);
}