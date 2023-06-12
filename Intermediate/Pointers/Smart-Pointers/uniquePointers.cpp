#include <iostream>
#include <memory>

using namespace std;

int main(){
    // unique_ptr<int> x(new int);
    auto numbers = make_unique<int[]>(10);
    auto y = make_unique<int>();
    numbers[0] = 10;
    cout << numbers[0] << endl;

    return 0;
}