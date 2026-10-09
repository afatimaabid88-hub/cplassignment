#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    switch ((a >= b && a >= c) ? 1 :
            (b >= a && b >= c) ? 2 : 3) {
        case 1:
            cout << "Largest: " << a;
            break;
        case 2:
            cout << "Largest: " << b;
            break;
        case 3:
            cout << "Largest: " << c;
            break;
    }
    return 0;
}
