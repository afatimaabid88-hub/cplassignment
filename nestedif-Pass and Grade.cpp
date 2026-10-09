#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter marks out of 100: ";
    cin >> marks;
    if (marks >= 0 && marks <= 100) {
        if (marks >= 50) {
            if (marks >= 80)
                cout << "Pass with Excellent Grade";
            else
                cout << "Pass";
        }
        else {
            cout << "Fail";
        }
    }
    else {
        cout << "Invalid Marks";
    }
    return 0;
}
