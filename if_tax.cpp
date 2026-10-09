#include <iostream>
using namespace std;
int main()
{
double income, tax;
cout << "Enter annual income: ";
cin >> income;
 if (income < 0)
    {
        cout << "Invalid income";
    }
    else if (income <= 600000)
    {
        tax = 0;
        cout << "Tax = Rs. " << tax;
    }
    else if (income <= 1200000)
    {
        tax = (income - 600000) * 0.05;
        cout << "Tax = Rs. " << tax;
    }
    else
    {
        tax = 30000 + (income - 1200000) * 0.10;
        cout << "Tax = Rs. " << tax;
    }
 return 0;
}
