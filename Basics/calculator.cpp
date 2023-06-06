#include <iostream>

using namespace std;

int main(){
    double x, y;
    char op;

    cout << "Enter An Operator (+, -, *, /) : ";
    cin >> op;

    cout << "Enter Two Numbers : ";
    cin >> x >> y;

    switch(op){
        case '+':
            cout << x + y << endl;
            break;
        case '-':
            cout << x - y << endl;
            break;
        case '*':
            cout << x * y << endl;
            break;
        case '/':
            cout << x / y << endl;
            break;
        default:
            cout << "Invalid Operator :{" << endl;
    }
    return 0;
}

/*
Enter An Operator (+, -, *, /) : /
Enter Two Numbers : 5481
3
1827
*/