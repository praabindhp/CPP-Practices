#include <iostream>

using namespace std;

int main(){
    int* numbers = new int[5];
    int entries = 0;

    while (true)
    {
        cout << "Number : ";
        cin >> numbers[entries];

        if (cin.fail()) break;
        entries++;

        if (entries == 5){
            int* temp = new int[10];

            for (int j = 0; j < entries; j++){
                temp[j] = numbers[j];
            }
            
            delete[] numbers;
            numbers = temp;
        }
    }

    for (int i = 0; i < entries; i++){
        cout << numbers[i] << endl;
    }    

    return 0;
}