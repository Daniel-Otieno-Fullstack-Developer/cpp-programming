// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Classes and Objects Assignment
// Task 5: Bank Account (encapsulation)

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;
public:
    BankAccount(string name, double opening) : owner(name), balance(opening) {}

    bool deposit(double amount) {
        if (amount <= 0) return false;
        balance += amount;
        return true;
    }

    bool withdraw(double amount) {
        if (amount <= 0 || amount > balance) return false;
        balance -= amount;
        return true;
    }

    double getBalance() const { return balance; }
};

int main() {
    BankAccount acc("Amina Hassan", 2000);

    cout << "Deposit 1500: " << (acc.deposit(1500) ? "OK" : "Refused") << endl;
    cout << "Deposit -200: " << (acc.deposit(-200) ? "OK" : "Refused") << endl;
    cout << "Withdraw 5000: " << (acc.withdraw(5000) ? "OK" : "Refused") << endl;
    cout << "Withdraw 800: " << (acc.withdraw(800) ? "OK" : "Refused") << endl;
    cout << "Balance: KES " << acc.getBalance() << endl;

    return 0;
}
