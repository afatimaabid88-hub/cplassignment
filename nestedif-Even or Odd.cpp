#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num >= 0) {
        if (num % 2 == 0)
            cout << "Even Number";
        else
            cout << "Odd Number";
    }
    else {
        if (num % 2 == 0)
            cout << "Negative Even Number";
        else
            cout << "Negative Odd Number";
    }
    return 0;
}
