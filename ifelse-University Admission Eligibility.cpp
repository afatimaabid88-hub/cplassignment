#include <iostream>
using namespace std;
int main() {
    double marks, testScore;
    cout << "Enter marks percentage: ";
    cin >> marks;
    cout << "Enter entry test score: ";
    cin >> testScore;
    if (marks < 0 || marks > 100 ||
        testScore < 0 || testScore > 100)
        cout << "Invalid Input";
    else if (marks < 70)
        cout << "Academic Requirement Not Met";
    else if (testScore < 60)
        cout << "Entry Test Requirement Not Met";
    else
        cout << "Eligible for Admission";
    return 0;
}
