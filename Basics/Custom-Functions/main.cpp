#include <iostream>
#include "utils/greet.hpp"

using namespace std;

string fullname(string firstname, string lastname) {
    return firstname + " " + lastname;
}

int main()
{
    msge::greet(fullname("Praabindh", "Pradeep"));
    cout << "Done" << endl;
    return 0;
}