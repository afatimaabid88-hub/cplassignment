#include <iostream>
using namespace std;

int main() {
    double marks, income;

    cout << "Enter marks percentage: ";
    cin >> marks;

    cout << "Enter annual family income: ";
    cin >> income;

    if (marks >= 0 && marks <= 100) {
        if (income >= 0) {
            if (marks >= 90) {
                if (income <= 600000)
                    cout << "100% Scholarship";
                else
                    cout << "50% Scholarship";
            }
            else {
                if (marks >= 80) {
                    if (income <= 600000)
                        cout << "50% Scholarship";
                    else
                        cout << "No Scholarship";
                }
                else
                    cout << "No Scholarship";
            }
        }
        else
            cout << "Invalid Income";
    }
    else
        cout << "Invalid Marks";

    return 0;
}
