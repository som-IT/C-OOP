#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolderName;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(std::string name, double initialBalance) : accountHolderName(name), balance(initialBalance) {}

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: $" << amount << "\n";
        } else {
            std::cout << "Invalid deposit amount\n";
        }
    }

    // Public method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn: $" << amount << "\n";
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds\n";
        }
    }

    // Public method to check the balance
    void checkBalance() const {
        std::cout << "Current balance: $" << balance << "\n";
    }
};

int main() {
    // Creating a bank account object
    BankAccount account("Abdi Hassan", 500.00);

    // Performing some operations
    account.checkBalance();
    account.deposit(150.00);
    account.checkBalance();
    account.withdraw(100.00);
    account.checkBalance();
    account.withdraw(600.00);  // This should show an error due to insufficient funds

    return 0;
}
