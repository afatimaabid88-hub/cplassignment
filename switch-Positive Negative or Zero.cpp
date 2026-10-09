#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    switch ((num > 0) - (num < 0)) {
        case 1:
            cout << "Positive";
            break;
        case -1:
            cout << "Negative";
            break;
        case 0:
            cout << "Zero";
            break;
    }

    return 0;
}
