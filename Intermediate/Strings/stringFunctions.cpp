#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char name[50] = "Praabindh";
    char lastName[] = " Pradeep";

    strcat(name, lastName);
    cout << name << endl;

    strcpy(name, lastName);
    cout << name << endl;

    if (strcmp(name, lastName) == 0){
        cout << "Equal" << endl;
    }

    return 0;
}