#include <string>
#include <iostream>

using namespace std;

int main(){
    string name = "praabindh";
    cout << name.starts_with('p') << endl; // 1
    cout << name.ends_with('h') << endl; // 1

    name[0] = 'P';
    cout << name << endl; // Praabindh 
    cout << name.length() << endl; // 9

    name += " Pradeep";
    cout << name << endl; // Praabindh Pradeep

    string fullName = name;
    cout << fullName << endl; // Praabindh Pradeep

    return 0;
}