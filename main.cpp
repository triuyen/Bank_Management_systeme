#include<iostream>
#include<string>

class BankAccount{
private :
    std::string name;
    double balance;

public:
    BanckAccount(std::string accountName, double
initalBalance) : name(accountName),
balance(initalBalance) {}
     
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
    }
void withdraw(double amount)
{
    if (amount <= balance)
    {
        balance -= amount;
    }
    else
    {
        std::count << "Insufficient Funds." <<
        std::endl;
    }

}
void display()
{
    std::count << "Account: " name << "\nBalance:$"<< balance std::endl;
}

};

int main(){
    std::string name;
    double initialDeposit;

    std::cout << "Enter your name: ";
    getline(std::cin, name);
    std::cout << "Enter initial deposit: ";
    std::cin >> initialDeposit;

    BankAccount account(name, initialDeposit);

    int choice;
    double amount;
    do
    {
        std::cout << "\n1. Deposit" << std::endl;
        std::cout << "2. Withdraw" << std::endl;
        std::cout << "3. Display Balance" << std::endl;

        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Enter deposit amount: ";
            std::cin >> amount;
            account.deposit(amount);
            break;
        case 2:
            std::cout << "Enter withdrawal amount:";
            break;
        case 3:
            account.display();
            break;
        case 4:
            break;

        default:
            std::cout << "Invalid choice. Please try again. " << std::
        }
    }
}