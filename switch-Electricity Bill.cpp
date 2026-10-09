#include <iostream>
using namespace std;
int main() {
    int units;
    double bill;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid Units";
    }
    else {
        switch (units <= 100 ? 1 :
                units <= 200 ? 2 : 3) {
            case 1:
                bill = units * 10;
                break;
            case 2:
                bill = 100 * 10 + (units - 100) * 15;
                break;
            case 3:
                bill = 100 * 10 + 100 * 15
                     + (units - 200) * 20;
                break;
        }
        cout << "Electricity Bill: Rs. " << bill;
    }
    return 0;
