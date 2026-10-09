#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
        cout << "Eligible to Vote";
    else if (age >= 0)
        cout << "Not Eligible";
    else
        cout << "Invalid Age";
    return 0;
}
