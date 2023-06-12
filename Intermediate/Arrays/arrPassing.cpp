#include <iostream>

using namespace std;

void printNumbers(int numbers[], int size){
    for (int i = 0; i < size; i++){
        cout << numbers[i] << endl;
    }
}

int main()
{
    int numbers[] = {10,20,30,40,50};
    printNumbers(numbers, 5);
    return 0;
}