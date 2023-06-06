#include <iostream>
using namespace std;

int main()
{
    cout << "Enter A Number : ";
    long long int number;
    cin >> number;
    if (number < 0)
    {
        cout << "Factorial Of Negative Numbers Doesn't Exist" << endl;
        return 0;
    }
    else
    {
        long long int factorial = 1;

        for (int i = number; i > 1; i--)
        {
            factorial *= i;
        }

        cout << number << "'s Factorial"
             << " Is " << factorial << endl;
    }

    return 0;
}