#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    const short minVal = 1;
    const short maxVal = 6;

    srand(time(0));
    int first = rand() % (maxVal - minVal + 1) + minVal;
    int second = rand() % (maxVal - minVal + 1) + minVal;
    cout << first << ", " << second << endl;
}

// Output: Random Number (1 Digit)