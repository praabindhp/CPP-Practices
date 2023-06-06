#include <iostream>

using namespace std;

int main(){
    double fahrenheit, celsius;
    cout << "Enter Fahrenheit Value : ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Celsius Value = " << celsius << endl;
}