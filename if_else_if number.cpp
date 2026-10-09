#include <iostream>
using namespace std;
int main()
{
 int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
 if (a > b)
        cout << "A is greater";
    else if (b > a)
        cout << "B is greater";
    else
        cout << "Both are equal";
 return 0;
}
