// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Loops Assignment
// Task 4: PIN Check (do while)

#include <iostream>
using namespace std;

int main() {
    const int correctPin = 4321;
    int pin, attempts = 0;

    // Always ask at least once
    do {
        cout << "Enter your PIN: ";
        cin >> pin;
        attempts++;
        if (pin != correctPin && attempts < 3) {
            cout << "Wrong PIN, try again" << endl;
        }
    } while (pin != correctPin && attempts < 3);

    if (pin == correctPin) {
        cout << "Access granted" << endl;
    } else {
        cout << "Card blocked" << endl;
    }

    return 0;
}
