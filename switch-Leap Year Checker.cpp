#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;
    if (year <= 0) {
        cout << "Invalid Year";
    }
    else {
        switch (year % 400 == 0 ? 1 :
                year % 100 == 0 ? 2 :
                year % 4 == 0 ? 3 : 4) {
            case 1:
            case 3:
                cout << "Leap Year";
                break;
            case 2:
            case 4:
                cout << "Not a Leap Year";
                break;
        }
    }
    return 0;
}
