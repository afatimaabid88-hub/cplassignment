#include <iostream>
using namespace std;
int main() {
    int balance, amount;
    cout << "Enter account balance: ";
    cin >> balance;
    cout << "Enter withdrawal amount: ";
    cin >> amount;
    switch (balance < 0 ? 1 :
            amount <= 0 ? 2 :
            amount % 500 != 0 ? 3 :
            amount > balance ? 4 : 5) {
        case 1:
            cout << "Invalid Balance";
            break;
        case 2:
            cout << "Invalid Withdrawal Amount";
            break;
        case 3:
            cout << "Amount Must Be a Multiple of 500";
            break;
        case 4:
            cout << "Insufficient Balance";
            break;
        case 5:
            cout << "Withdrawal Successful\n";
            cout << "Remaining Balance: "
                 << balance - amount;
            break;
    }

    return 0;
}
