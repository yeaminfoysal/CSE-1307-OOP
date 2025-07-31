#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    string accountHolderName;  // Public: accessible from anywhere

protected:
    string accountType;  // Protected: accessible in derived class

private:
    double balance;  // Private: only accessible within this class

public:
    // Constructor
    BankAccount(string name, string type, double initialBalance) {
        accountHolderName = name;
        accountType = type;
        balance = initialBalance;
    }

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Public method to display balance
    void displayBalance() {
        cout << "Balance: $" << balance << endl;
    }

    // Public method to get account type
    string getAccountType() {
        return accountType;
    }
};

// Derived class
class SavingsAccount : public BankAccount {
public:
    // Constructor
    SavingsAccount(string name, double initialBalance)
        : BankAccount(name, "Savings", initialBalance) {}

    void showAccountInfo() {
        cout << "Account Holder: " << accountHolderName << endl;
        // cout << "Balance: " << balance << endl;  // ❌ Error: balance is private
        cout << "Account Type: " << accountType << endl; // ✅ Protected access
    }
};

int main() {
    BankAccount account("Alice", "Checking", 1000.0);

    // Public access
    cout << "Name: " << account.accountHolderName << endl;
    account.deposit(500);         // ✅ allowed
    account.displayBalance();     // ✅ allowed

    // account.balance = 2000;     // ❌ Error: balance is private
    // cout << account.accountType; // ❌ Error: accountType is protected

    // Derived class object
    SavingsAccount sa("Bob", 1500.0);
    sa.showAccountInfo();
    sa.deposit(300);
    sa.displayBalance();

    return 0;
}
