#include <iostream>
using namespace std;
int main() {
    double income, tax = 0;
    cout << "Enter annual income: ";
    cin >> income;
    if (income < 0)
        cout << "Invalid Income";
    else if (income <= 600000)
        tax = 0;
    else if (income <= 1200000)
        tax = (income - 600000) * 0.05;
    else
        tax = 30000 + (income - 1200000) * 0.10;
    if (income >= 0)
        cout << "Income Tax: Rs. " << tax;
    return 0;
}
