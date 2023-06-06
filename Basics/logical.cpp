#include <iostream>

using namespace std;

int main(){
    int age = 20;
    bool isEligible = (age > 18) && (age < 30);
    cout << boolalpha << isEligible << endl;
    return 0;
    }