#include <iostream>
#include <string>

class BankAccount {
private:
    std::string name;
    double balance;

public:
    // Constructor name was incorrect (BanckAccount -> BankAccount)
    BankAccount(std::string accountName, double initialBalance)
        : name(accountName), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::cout << "Insufficient Funds." << std::endl;
        }
    }

    void display() {
        // Correcting the use of std::cout
        std::cout << "Account: " << name << "\nBalance: $" << balance << std::endl;
    }
};

int main() {
    std::string name;
    double initialDeposit;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);  // getline requires std::getline

    std::cout << "Enter initial deposit: ";
    std::cin >> initialDeposit;

    // Correct constructor call
    BankAccount account(name, initialDeposit);

    int choice;
    double amount;
    do {
        std::cout << "\n1. Deposit" << std::endl;
        std::cout << "2. Withdraw" << std::endl;
        std::cout << "3. Display Balance" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter deposit amount: ";
            std::cin >> amount;
            account.deposit(amount);
            break;
        case 2:
            std::cout << "Enter withdrawal amount: ";
            std::cin >> amount;
            account.withdraw(amount);  // Call withdraw function here
            break;
        case 3:
            account.display();
            break;
        case 4:
            std::cout << "Exiting..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;  // Add break here to prevent fallthrough
        }
    } while (choice != 4);  // Loop ends when user chooses 4

    return 0;
}