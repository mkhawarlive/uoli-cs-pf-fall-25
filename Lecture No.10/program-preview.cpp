#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    void setBalance(double amount)
    {
        balance = amount;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
    }

    void displayBalance()
    {
        cout << "Balance = " << balance;
    }
};

int main()
{
    BankAccount account;

    account.setBalance(1000);
    account.deposit(500);
    account.displayBalance();

    return 0;
}