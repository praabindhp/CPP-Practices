#include <iostream>

using namespace std;

// Reverse An Array
int main(){

    int numbers[] = { 10, 20, 30 };
    // Initializing Pointer To Last Element

    int* ptr = &numbers[size(numbers) - 1];
    // Looping The Array Using Pointers - In Reverse

    while (ptr >= numbers)
    {
        cout << *ptr << endl;
        // Decrementing From The Last Element
        ptr--;
    }

    // Returning (int) Value
    return 0;
}