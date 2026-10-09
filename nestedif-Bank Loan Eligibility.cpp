#include <iostream>
using namespace std;

int main() {
    double salary;
    int age;
    int creditScore;
    cout << "Enter monthly salary: ";
    cin >> salary;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter credit score: ";
    cin >> creditScore;
    if (salary > 0) {
        if (age >= 18 && age <= 60) {
            if (salary >= 50000) {
                if (creditScore >= 700)
                    cout << "Loan Eligible";
                else
                    cout << "Credit Score Too Low";
            }
            else
                cout << "Salary Requirement Not Met";
        }
        else
            cout << "Age Requirement Not Met";
    }
    else
        cout << "Invalid Salary";
    return 0;
}
