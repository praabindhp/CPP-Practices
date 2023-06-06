#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double radius, area;
    const double PI = 3.14159;
    cout << "Enter Radius : ";
    cin >> radius;
    area = PI * pow(radius, 2);
    cout << "Area = " << area << endl;
}

// Path : Basic-Tests/circleArea.cpp