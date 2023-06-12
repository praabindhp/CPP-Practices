#include <iostream>

using namespace std;

double rate = 1.2;

// With Pointers ->

void increasePrice(double* price){
    *price *= rate;
}

int main(){
    double price = 100;
    increasePrice(&price);
    cout << price << endl;
    return 0;
}

/*
Without Pointers ->

void increasePrice(double& price){
    price *= rate;
}

int main(){
    double price = 100;
    increasePrice(price);
    cout << price << endl;
    return 0;
}
*/