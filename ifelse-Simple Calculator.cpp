#include <iostream>
using namespace std;
int main() {
    double a, b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;
    if (op == '+')
        cout << "Result: " << a + b;
    else if (op == '-')
        cout << "Result: " << a - b;
    else if (op == '*')
        cout << "Result: " << a * b;
    else if (op == '/' && b != 0)
        cout << "Result: " << a / b;
    else if (op == '/' && b == 0)
        cout << "Cannot divide by zero";
    else
        cout << "Invalid Operator";
    return 0;
}
