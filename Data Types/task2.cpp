// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Data Types Assignment
// Task 2: Age Calculator (int)

#include <iostream>
using namespace std;

int main() {
    const int currentYear = 2026;
    int birthYear;

    cout << "Enter your year of birth: ";
    cin >> birthYear;

    // Years and ages are whole numbers, so int is the right type
    int age = currentYear - birthYear;

    cout << "You are " << age << " years old" << endl;

    return 0;
}
