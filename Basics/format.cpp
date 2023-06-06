#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// int main(){
//     cout << left;
//     cout << setw(12) << "Number" << setw(12) << "Square" << setw(12) << "Cube" << endl;
//     for (int i = 0; i < 12; i++){
//         cout << setw(12) << i << setw(12) << pow(i, 2) << setw(12) << pow(i, 3) << endl;
//     }
// }

int main()
{
    cout << left;
    cout << setw(12) << "Course" << setw(12) << "Students" << endl;
    cout << "--------------------" << endl;
    cout << setw(12) << "C++" << right << setw(8) << "120" << endl;
    cout << left << setw(12) << "JavaScript" << right << setw(8) << "50" << endl;
}