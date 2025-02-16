#include <iostream>
using namespace std;

class ATM {
private:
    double balance;   // Private data member for account balance
    int pinCode;      // Private data member for PIN code

    // check if pincode is correct
    bool pinCodeCheck(int enteredPin) {
        return enteredPin == pinCode;
    }

public:
    // Constructor to initialize balance and set a PIN code
    ATM(double initialBalance, int initialPinCode) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Initial balance cannot be negative. Setting balance to $0." << endl;
        }
        pinCode = initialPinCode;
    }

    // Method to deposit money into the account, after PIN validation
    void depositMoney(double amount, int enteredPin) {
        if (pinCodeCheck(enteredPin)) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposited: $" << amount << endl;
            } else {
                cout << "Invalid deposit amount!" << endl;
            }
        } else {
            cout << "Incorrect PIN! Access denied." << endl;
        }
    }

    // Method to withdraw money from the account, after PIN validation
    void withdrawMoney(double amount, int enteredPin) {
        if (pinCodeCheck(enteredPin)) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrew: $" << amount << endl;
            } else if (amount > balance) {
                cout << "Insufficient funds!" << endl;
            } else {
                cout << "Invalid withdrawal amount!" << endl;
            }
        } else {
            cout << "Incorrect PIN! Access denied." << endl;
        }
    }

    // Method to check balance, after PIN validation
    void checkBalance(int enteredPin) {
        if (pinCodeCheck(enteredPin)) {
            cout << "Account balance: $" << balance << endl;
        } else {
            cout << "Incorrect PIN! Access denied." << endl;
        }
    }
};

int main() {
    // Create an ATM object with an initial balance of $1000 and set PIN to 1234
    ATM myATM(1000.50, 1234);

    int enteredPin;

    // Ask the user to enter their PIN code
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    // Perform operations via ATM after PIN validation
    myATM.depositMoney(500.75, enteredPin);  // Deposit $500.75
    myATM.withdrawMoney(200, enteredPin);    // Withdraw $200
    myATM.checkBalance(enteredPin);          // Display balance
    myATM.depositMoney(300, enteredPin);     // Deposit $300
    myATM.withdrawMoney(50, enteredPin);     // Withdraw $50

    return 0;
}
