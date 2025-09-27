/*
Task 1:Create a BankAccount class with:
● Private data: accountNumber, balance, accountHolderName
● Public methods:
○ deposit(amount) - add to balance
○ withdraw(amount) - subtract from balance (check sufficient funds)
○ getBalance() - return current balance
○ displayAccountInfo()
Test:
● Create account with initial balance
● Deposit money
● Withdraw money (both valid and invalid amounts)
● Try to access balance directly (should fail)
*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    string accountHolderName;

public:
    // Constructor
    BankAccount(string accNum, string name, double initBalance = 0.0) {
        accountNumber = accNum;
        accountHolderName = name;
        balance = initBalance;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds! Withdrawal failed." << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew $" << amount << endl;
        }
    }

    // Get current balance
    double getBalance() const {
        return balance;
    }

    // Display account info
    void displayAccountInfo() const {
        cout << "\nAccount Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Create account with initial balance
    BankAccount acc1("12345", "Alice", 1000);
    acc1.displayAccountInfo();

    // Deposit money
    acc1.deposit(500);
    cout << "Balance after deposit: $" << acc1.getBalance() << endl;

    // Withdraw valid amount
    acc1.withdraw(300);
    cout << "Balance after withdrawal: $" << acc1.getBalance() << endl;

    // Withdraw invalid amount (more than balance)
    acc1.withdraw(1500);

    // Withdraw invalid amount (negative)
    acc1.withdraw(-50);

    // Try direct access (should fail)
    // acc1.balance = 5000;  // Uncommenting this line will give compiler error

    return 0;
}
