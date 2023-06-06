#include <iostream>

using namespace std;

int main()
{
    int sales = 11'000;
    double commission;
    if (sales <= 10'000)
        commission = 0.1;
    else if (sales <= 15'000)
        commission = 0.15;
    else
        commission = 0.2;
    cout << commission << endl;

    return 0;
}