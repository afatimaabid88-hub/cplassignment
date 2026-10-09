#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks out of 100: ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid Marks";
    }
    else {
        switch (marks >= 50) {
            case 1:
                cout << "Pass";
                break;
            case 0:
                cout << "Fail";
                break;
        }
    }

    return 0;
}
