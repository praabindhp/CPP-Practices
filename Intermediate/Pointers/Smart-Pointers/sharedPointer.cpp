#include <iostream>
#include <memory>

using namespace std;

int main(){
    auto x = make_shared<int>();
    *x = 10;

    shared_ptr<int> y(x);
    if (y == x){
        cout << "Equal" << endl;
        // Output : Equal
    }

    cout << *y << endl;
    // Output : 10 (Same As - x - Value)

    return 0;
}