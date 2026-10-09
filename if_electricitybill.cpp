#include <iostream>
using namespace std;
int main()
{
 int units;
 int bill;
 cout << "Enter electricity units: ";
 cin >> units;
 if (units < 0)
    {
        cout << "Invalid units";
    }
    else if (units <= 100)
    {
        bill = units * 10;
        cout << "Bill = Rs. " << bill;
    }
    else if (units <= 200)
    {
        bill = (100 * 10) + (units - 100) * 15;
        cout << "Bill = Rs. " << bill;
    }
    else
    {
    bill = (100 * 10) + (100 * 15)
               + (units - 200) * 20;
    cout << "Bill = Rs. " << bill;
    }
 return 0;
}
