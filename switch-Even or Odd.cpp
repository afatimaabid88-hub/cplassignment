#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    switch (num % 2 == 0) {
        case 1:
            cout << "Even Number";
            break;
        case 0:
            cout << "Odd Number";
            break;
    }

    return 0;
}
