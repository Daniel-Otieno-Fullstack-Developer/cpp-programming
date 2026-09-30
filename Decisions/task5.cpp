// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Decisions Assignment
// Task 5: Leap Year (&&  ||)

#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    // Divisible by 4 but not 100, or divisible by 400
    bool leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

    if (leap) {
        cout << year << " is a leap year" << endl;
    } else {
        cout << year << " is not a leap year" << endl;
    }

    return 0;
}
