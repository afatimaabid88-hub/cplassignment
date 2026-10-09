#include <iostream>
using namespace std;
int main() {
    double marks, test;
    cout << "Enter marks percentage: ";
    cin >> marks;
    cout << "Enter entry test score: ";
    cin >> test;
    if (marks < 0 || marks > 100 ||
        test < 0 || test > 100) {
        cout << "Invalid Input";
    }
    else {
        switch (marks >= 70 && test >= 60 ? 1 :
                marks < 70 ? 2 : 3) {
            case 1:
                cout << "Admission Eligible";
                break;
            case 2:
                cout << "Marks Requirement Not Met";
                break;
            case 3:
                cout << "Entry Test Score Too Low";
              break;
        }
    }
    return 0;
}
