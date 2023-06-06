#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    long elapSec = time(0);
    srand(time(0));
    int number = rand() % 100;
    cout << number << endl;
    return 0;
}

// Output: Random Number (2 Digits)