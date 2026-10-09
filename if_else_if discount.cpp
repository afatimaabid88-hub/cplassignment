#include <iostream>
using namespace std;
int main()
{
    double amount, discount, finalAmount;
 cout << "Enter shopping amount: ";
    cin >> amount;
 if (amount < 0)
        cout << "Invalid amount";
    else if (amount < 5000)
        discount = 0;
    else if (amount < 10000)
        discount = amount * 0.05;
    else if (amount < 20000)
        discount = amount * 0.10;
    else
        discount = amount * 0.15;
 if (amount >= 0)
    {
        finalAmount = amount - discount;
        cout << "Discount = Rs. " << discount << endl;
        cout << "Final amount = Rs. " << finalAmount;
    }
 return 0;
}
