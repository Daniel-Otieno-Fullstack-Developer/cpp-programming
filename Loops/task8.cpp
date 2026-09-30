// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Loops Assignment
// Task 8: Digit Sum (while + % and /)

#include <iostream>
using namespace std;

int main() {
    int number, digits = 0, sum = 0;

    cout << "Enter a positive number: ";
    cin >> number;

    int original = number;   // keep a copy for the message

    while (number > 0) {
        sum += number % 10;  // last digit
        number /= 10;        // remove last digit
        digits++;
    }

    cout << original << " has " << digits << " digits" << endl;
    cout << "Sum of digits: " << sum << endl;

    return 0;
}
