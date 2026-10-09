#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid Sides";
    }
    else if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Invalid Triangle";
    }
    else {
        switch ((a == b && b == c) ? 1 :
                (a == b || b == c || a == c) ? 2 : 3) {
            case 1:
                cout << "Equilateral Triangle";
                break;
            case 2:
                cout << "Isosceles Triangle";
                break;
            case 3:
                cout << "Scalene Triangle";
                break;
        }
    }
    return 0;
}
