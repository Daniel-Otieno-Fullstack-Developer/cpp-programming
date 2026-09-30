// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Data Types Assignment
// Task 5: Pass or Fail (bool)

#include <iostream>
using namespace std;

int main() {
    int mark;

    cout << "Enter your mark: ";
    cin >> mark;

    // The comparison already produces true or false, so assign it straight to the bool
    bool passed = (mark >= 50);

    // boolalpha prints true/false as words instead of 1/0
    cout << boolalpha << "Passed: " << passed << endl;

    return 0;
}
