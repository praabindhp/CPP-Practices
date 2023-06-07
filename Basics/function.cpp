#include <iostream>

using namespace std;

string fullname(string firstname, string lastname) {
    return firstname + " " + lastname;
}

void greet(string name) {
    cout << "Howdy, " << name << " !" << endl;
}

int main()
{
    greet(fullname("Praabindh", "Pradeep"));
    cout << "Done" << endl;
    return 0;
}