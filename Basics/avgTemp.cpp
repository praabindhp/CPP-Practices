#include <iostream>

using namespace std;

int main()
{
    double temp[] = {32, 15.2, 78.4, 80.2, 64, 51.2};
    double totalTemp = 0;
    int length = sizeof(temp) / sizeof(double);

    for (int i = 0; i < length; i++)
    {
        totalTemp += temp[i];
    }

    cout << "Average Temperature : " << totalTemp / length << endl;
    return 0;
}