#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0) {
        if (a + b > c && a + c > b && b + c > a) {
            if (a == b) {
                if (b == c)
                    cout << "Equilateral Triangle";
                else
                    cout << "Isosceles Triangle";
            }
            else {
                if (a == c || b == c)
                    cout << "Isosceles Triangle";
                else
                    cout << "Scalene Triangle";
            }
        }
        else
            cout << "Invalid Triangle";
    }
    else
        cout << "Invalid Sides";

    return 0;
}
