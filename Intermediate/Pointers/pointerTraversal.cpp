#include <iostream>

using namespace std;

int main(){
    int numbers[] = {10, 20, 30};
    int* ptr = numbers;

    cout << *(ptr + 1) << endl;
    cout << ptr[1] << endl;
    cout << numbers[1] << endl;

    return 0;
}