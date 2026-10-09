#include <iostream>
using namespace std;
int main() {
    int balance, amount;
    cout << "Enter balance: ";
    cin >> balance;
    cout << "Enter withdrawal amount: ";
    cin >> amount
    if (balance < 0)
        cout << "Invalid Balance";
    else if (amount <= 0)
        cout << "Invalid Amount";
    else if (amount % 500 != 0)
        cout << "Amount must be a multiple of 500";
    else if (amount > balance)
        cout << "Insufficient Balance";
    else
        cout << "Remaining Balance: " << balance - amount;
    return 0;
}
