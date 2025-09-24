/*
2. Create a BankAccount class with:
● Default constructor that sets accountNumber="0000", balance=0.0, owner="Guest"
● Methods to deposit and withdraw
● Method to display account info
*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    string owner;

public:
    // Default constructor
    BankAccount() {
        accountNumber = "0000";
        balance = 0.0;
        owner = "Guest";
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    // Method to display account info
    void displayAccountInfo() {
        cout << "\nAccount Owner: " << owner << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account; // Default constructor

    account.displayAccountInfo();

    account.deposit(500);
    account.withdraw(200);
    account.withdraw(400); // Insufficient balance

    account.displayAccountInfo();

    return 0;
}
