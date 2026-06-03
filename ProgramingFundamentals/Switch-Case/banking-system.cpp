#include <iostream>
using namespace std;

int main() {
    float balance = 10000;
    int choice;
    float amount;

    cout << "===== Banking System =====\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Transfer\n";
    cout << "5. Exit\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Current Balance = " << balance << endl;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;

            balance += amount;

            cout << "Deposit Successful!" << endl;
            cout << "New Balance = " << balance << endl;
            break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawal Successful!" << endl;
                cout << "Remaining Balance = " << balance << endl;
            } else {
                cout << "Insufficient Balance!" << endl;
            }
            break;

        case 4:
            cout << "Enter amount to transfer: ";
            cin >> amount;

            if (amount <= balance) {
                balance -= amount;
                cout << "Transfer Successful!" << endl;
                cout << "Remaining Balance = " << balance << endl;
            } else {
                cout << "Insufficient Balance!" << endl;
            }
            break;

        case 5:
            cout << "Thank You!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}