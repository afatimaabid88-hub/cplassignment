#include <iostream>
using namespace std;
int main() {
    int age;
    bool citizen;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Are you a citizen? (1 for Yes, 0 for No): ";
    cin >> citizen;
    if (age >= 18) {
        if (citizen == 1)
            cout << "Eligible to Vote";
        else
            cout << "Citizenship Required";
    }
    else {
        cout << "Age Requirement Not Met";
    }
    return 0;
}
