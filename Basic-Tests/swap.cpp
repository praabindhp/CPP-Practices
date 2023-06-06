#include <iostream>

using namespace std;

// int main(){
//     std::cout << "Hello World!" << std::endl;
// }

int main()
{
    int a = 10;
    int b = 20;
    int c = a;

    // Initial Value
    cout << "\nInitial Values" << endl;
    cout << "A's Value : " << a << endl;
    cout << "B's Value : " << b << endl;

    // Swap The Number
    a = b;
    b = c;

    cout << "\nAfter Swapping" << endl;
    cout << "A's Value : " << a << endl;
    cout << "B's Value : " << b << endl;

    return 0;
}