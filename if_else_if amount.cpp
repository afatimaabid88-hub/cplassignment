#include <iostream>
using namespace std;
int main()
{
    int balance, amount;
 cout << "Enter balance: ";
    cin >> balance;
 cout << "Enter withdrawal amount: ";
    cin >> amount;
 if (balance < 0 || amount <= 0)
        cout << "Invalid input";
    else if (amount % 500 != 0)
        cout << "Amount must be a multiple of 500";
    else if (amount > balance)
        cout << "Insufficient balance";
    else
    {
        balance = balance - amount;
        cout << "Withdrawal successful" << endl;
        cout << "Remaining balance = Rs. " << balance;
    }
 return 0;
}
