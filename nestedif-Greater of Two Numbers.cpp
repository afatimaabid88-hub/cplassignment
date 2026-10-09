#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a != b) {
        if (a > b)
            cout << "First Number is Greater";
        else
            cout << "Second Number is Greater";
    }
    else {
        cout << "Both Numbers are Equal";
    }
    return 0;
}
