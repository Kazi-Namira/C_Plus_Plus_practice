#include <iostream>
#include <conio.h>

using namespace std;

class BankAccount {
private:
    string name;
    double accbalance;
    double Deposit;
    double Withdraw;

public:
    BankAccount() {
        name = "Alam";
        accbalance = 0.0;
        Deposit = 0.0;
        Withdraw = 0.0;
    }

    void setDeposit(double D) {
        Deposit = D;
        accbalance += D; // Update account balance with the deposit amount
    }

    double getDeposit() {
        return Deposit;
    }

    void setWithdraw(double W) {
        Withdraw = W;
        accbalance -= W; // Update account balance by subtracting the withdrawal amount
    }

    double getWithdraw() {
        return Withdraw;
    }

    void display() {
        cout << "Account Holder Name: " << name << "\n";
        cout << "Deposit: " << Deposit << "\n";
        cout << "Withdraw: " << Withdraw << "\n";
        cout << "Account Balance: " << accbalance << "\n";
    }

    ~BankAccount() {
        // Destructor code if needed
    }
};

int main() {
    BankAccount Account;
    Account.setDeposit(15000);
    Account.setWithdraw(10000);
    Account.display();

    getch();
}
