
#include <iostream>
#include <string>
using namespace std;

// Base Class
class Account {
protected:
    string name;
    int accountNo;
    double balance;

public:
    Account(string n, int acc, double bal) {
        name = n;
        accountNo = acc;
        balance = bal;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rs." << amount << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    virtual void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: Rs." << amount << endl;
        } else {
            cout << "Invalid amount or insufficient balance!" << endl;
        }
    }

    void statement() {
        cout << "\n--- Account Statement ---\n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNo << endl;
        cout << "Balance: Rs." << balance << endl;
    }

    virtual ~Account() {}
};

// Derived Class 1
class SavingsAccount : public Account {
public:
    SavingsAccount(string n, int acc, double bal)
        : Account(n, acc, bal) {}

    void addInterest() {
        double interest = balance * 0.04;
        balance += interest;
        cout << "Interest Added: Rs." << interest << endl;
    }
};

// Derived Class 2
class CheckingAccount : public Account {
public:
    CheckingAccount(string n, int acc, double bal)
        : Account(n, acc, bal) {}

    void withdraw(double amount) override {
        double fee = 10;

        if (amount > 0 && amount + fee <= balance) {
            balance -= (amount + fee);
            cout << "Withdrawn: Rs." << amount << endl;
            cout << "Transaction Fee: Rs." << fee << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main() {
    SavingsAccount s("Rahul", 101, 5000);
    CheckingAccount c("Amit", 102, 8000);

    cout << "--- Savings Account ---\n";
    s.deposit(2000);
    s.withdraw(1000);
    s.addInterest();
    s.statement();

    cout << "\n--- Checking Account ---\n";
    c.deposit(1000);
    c.withdraw(2000);
    c.statement();

    return 0;
}
