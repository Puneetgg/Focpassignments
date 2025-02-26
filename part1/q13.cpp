#include <iostream>

using namespace std;

int main() {
    int choice;
    double balance = 1000.0; // Initial balance
    double amount;

    while (true) {
        cout << "ATM Menu:" << endl;
        cout << "1. Withdrawal" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Balance Inquiry" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance!" << endl;
                } else if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful. New balance: " << balance << endl;
                }
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                } else {
                    balance += amount;
                    cout << "Deposit successful. New balance: " << balance << endl;
                }
                break;
            case 3:
                cout << "Current balance: " << balance << endl;
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}