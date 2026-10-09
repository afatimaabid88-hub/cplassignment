#include <iostream>
using namespace std;
int main() {
    double marks, test;
    cout << "Enter marks percentage: ";
    cin >> marks;
    cout << "Enter entry test score: ";
    cin >> test;

    if (marks >= 0 && marks <= 100) {
        if (test >= 0 && test <= 100) {
            if (marks >= 70) {
                if (test >= 60)
                    cout << "Admission Eligible";
                else
                    cout << "Entry Test Score Too Low";
            }
            else
                cout << "Marks Requirement Not Met";
        }
        else
            cout << "Invalid Test Score";
    }
    else
        cout << "Invalid Marks";
    return 0;
}
