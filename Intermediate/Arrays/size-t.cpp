#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {10,20,30,40,50};
    cout << sizeof(numbers) << endl;
    cout << sizeof(int) << endl;
    
    int count = sizeof(numbers) / sizeof(int);
    cout << "The Array Contains " << count << " Elements" << endl;
    return 0;
}