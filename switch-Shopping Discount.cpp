#include <iostream>
using namespace std;
int main() {
    double amount, discount = 0, finalAmount;
    cout << "Enter shopping amount: ";
    cin >> amount;

    if (amount < 0) {
        cout << "Invalid Amount";
    }
    else {
        switch (amount >= 20000 ? 3 :
                amount >= 10000 ? 2 :
                amount >= 5000 ? 1 : 0) {
            case 3:
                discount = 30;
                break;
            case 2:
                discount = 20;
                break;
            case 1:
                discount = 10;
                break;
            case 0:
                discount = 0;
                break;
        }

        finalAmount = amount - (amount * discount / 100);
        cout << "Discount: " << discount << "%\n";
        cout << "Discount Amount: Rs. "
             << amount * discount / 100 << "\n";
        cout << "Final Amount: Rs. " << finalAmount;
    }
    return 0;
}
