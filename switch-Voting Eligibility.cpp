#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid Age";
    }
    else {
        switch (age >= 18) {
            case 1:
                cout << "Eligible to Vote";
                break;
            case 0:
                cout << "Not Eligible to Vote";
                break;
        }
    }

    return 0;
}
