#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
 if (marks < 0 || marks > 100)
        cout << "Invalid marks";
    else if (marks >= 50)
        cout << "Pass";
    else
        cout << "Fail";
 return 0;
}
