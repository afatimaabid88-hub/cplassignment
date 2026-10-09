#include <iostream>
using namespace std;
int main() {
    double marks, income;
    cout << "Enter marks percentage: ";
    cin >> marks;
    cout << "Enter annual family income: ";
    cin >> income;
    if (marks < 0 || marks > 100 || income < 0) {
        cout << "Invalid Input";
    }
    else {
        switch (marks >= 90 ? (income <= 600000 ? 1 : 2) :
                marks >= 80 ? (income <= 600000 ? 2 : 3) : 3) {
            case 1:
                cout << "100% Scholarship";
                break;
            case 2:
                cout << "50% Scholarship";
                break;
            case 3:
                cout << "No Scholarship";
                break;
        }
    }
    return 0;
}
