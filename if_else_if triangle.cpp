#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
 cout << "Enter three sides: ";
    cin >> a >> b >> c;
 if (a <= 0 || b <= 0 || c <= 0)
        cout << "Invalid sides";
    else if (a + b <= c || a + c <= b || b + c <= a)
        cout << "Triangle is not valid";
    else if (a == b && b == c)
        cout << "Equilateral triangle";
    else if (a == b || b == c || a == c)
        cout << "Isosceles triangle";
    else
        cout << "Scalene triangle";
 return 0;
}
