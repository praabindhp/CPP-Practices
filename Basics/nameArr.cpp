#include <iostream>

using namespace std;

int main(){
    string nameArr[3];

    cout << "Enter First Name : ";
    getline(cin, nameArr[0]);
    cout << "Enter Second Name : ";
    getline(cin, nameArr[1]);
    cout << "Enter Third Name : ";
    getline(cin, nameArr[2]);
    cout << "" << endl;
    for (int i = 0; i < 3; i++){
        cout << "Howdy, " << nameArr[i] << " !" << endl;
    }

    return 0;
}