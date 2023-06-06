#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    double y = 5;
    bool result1 = x == y;
    bool result2 = x != y;
    bool result3 = x > y;
    bool result4 = x < y;
    cout << boolalpha << result1 << endl;
    cout << boolalpha << result2 << endl;
    cout << boolalpha << result3 << endl;
    cout << boolalpha << result4 << endl;
    return 0;
}