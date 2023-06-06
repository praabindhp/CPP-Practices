#include <iostream>

using namespace std;

int main(){
    cout << "Enter 2 Numbers : ";
    double x, y;
    cin >> x;
    cin >> y;
    (x > y) ? cout << x << " Is Larger" << endl: cout << y << " Is Larger" << endl;
    return 0;
}