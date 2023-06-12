#include<iostream>

using namespace std;

int main(){
    int x = 10;
    int y = 20;

    int* ptr = &x;
    *ptr *= 2;
    cout << *ptr << endl;

    ptr = &y;
    *ptr *= 3;
    cout << *ptr << endl;

    return 0;
}

/*
ptr
0x7ffc00114608
0x7ffc0011460c

*ptr
20
60
*/