// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Operators and Expressions Assignment
// Task 6: Savings Tracker (+= -= *= /=)

#include <iostream>
using namespace std;

int main() {
    double balance = 1000;   // starting savings in KES

    cout << "Starting balance: " << balance << endl;

    balance += 500;          // same as balance = balance + 500
    cout << "After deposit of 500: " << balance << endl;

    balance -= 300;          // same as balance = balance - 300
    cout << "After withdrawal of 300: " << balance << endl;

    balance *= 1.10;         // add 10% interest
    cout << "After 10% interest: " << balance << endl;

    balance /= 4;            // share it across four weeks
    cout << "Weekly budget for 4 weeks: " << balance << endl;

    return 0;
}
