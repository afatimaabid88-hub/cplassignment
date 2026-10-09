#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch ((a > b) - (a < b)) {
        case 1:
            cout << "First Number is Greater";
            break;
        case -1:
            cout << "Second Number is Greater";
            break;
        case 0:
            cout << "Both Numbers are Equal";
            break;
    }
    return 0;
}
