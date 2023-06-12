#include <iostream>

using namespace std;

int main() {
    int first[] = {10, 12, 15};
    int second[] = {10, 12, 15};

    bool areEqual = true;
    for (int i = 0; i < size(first); i++){
        if(first[i] != second[i]){
            areEqual = false;
            break;
        }
    }

    cout << boolalpha << areEqual << endl;
    return 0;
}