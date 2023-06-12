#include <iostream>

using namespace std;

void print(int arr[]){
    arr[0] = 25;
}

int main(){
    int arr[] = {10, 15, 20};
    int* ptr = arr;

    print(arr);
    cout << ptr[0] << endl;

    return 0;
}