#include <iostream>

using namespace std;

int main(){
    string street, city, state, zip;

    cout << "Enter Street Address : ";
    getline(cin, street);
    cout << "Enter City : ";
    getline(cin, city);
    cout << "Enter State : ";
    getline(cin, state);
    cout << "Enter Zip Code : ";
    getline(cin, zip);

    cout << "\nThe Address : " << endl;

    cout << street << endl;
    cout << city << ", " << state << " - " << zip << endl;

    return 0;
}