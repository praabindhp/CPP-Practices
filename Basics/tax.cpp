#include <iostream>

using namespace std;

int main(){
    int sales = 95000;
    double taxRate = 0.04;
    const double tax = sales * taxRate;
    double countyTaxRate = 0.02;
    const double countyTax = sales * countyTaxRate;

    cout << "Sales = $" << sales << endl;
    cout << "State Tax = $" << tax << endl;
    cout << "County Tax = $" << countyTax << endl;

    double totalTax = tax + countyTax;
    cout << "Total Tax = $" << totalTax << endl;
}