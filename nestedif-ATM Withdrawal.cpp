#include <iostream>
using namespace std;
int main() {
    double balance, amount;
    cout << "Enter account balance: ";
    cin >> balance;
    cout << "Enter withdrawal amount: ";
    cin >> amount;
    if (balance >= 0) {
        if (amount > 0) {
            if (amount <= balance) {
                if (static_cast<int>(amount) % 500 == 0
                    && amount == static_cast<int>(amount)) {
                    balance = balance - amount;
                    cout << "Withdrawal Successful\n";
                    cout << "Remaining Balance: " << balance;
                }
                else
                    cout << "Amount must be a whole multiple of 500";
            }
            else
                cout << "Insufficient Balance";
        }
        else
           cout << "Invalid Withdrawal Amount";
    }
    else
        cout << "Invalid Balance";
    return 0;
}
