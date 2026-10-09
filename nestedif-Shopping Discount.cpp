#include <iostream>
using namespace std;
int main() {
    double amount, discount, finalAmount;
    cout << "Enter shopping amount: ";
    cin >> amount;
    if (amount >= 0) {
        if (amount >= 10000) {
            discount = 20;
            if (amount >= 20000)
                discount = 30;
        }
        else {
            if (amount >= 5000)
                discount = 10;
            else
                discount = 0;
        }

        finalAmount = amount - (amount * discount / 100);
        cout << "Discount: " << discount << "%\n";
        cout << "Discount Amount: Rs. "
             << amount * discount / 100 << "\n";
        cout << "Final Amount: Rs. " << finalAmount;
    }
    else
        cout << "Invalid Amount";
    return 0;
}
