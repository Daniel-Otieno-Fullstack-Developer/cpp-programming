// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Loops Assignment
// Task 2: Times Table (for)

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Which times table? ";
    cin >> number;

    for (int i = 1; i <= 12; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
