// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Decisions Assignment
// Task 8: Bus Fare (nested if)

#include <iostream>
using namespace std;

int main() {
    int age;
    char student;
    int fare;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 5) {
        fare = 0;
    } else if (age >= 60) {
        fare = 50;
    } else {
        // Only passengers aged 5 to 59 are asked about student status
        cout << "Are you a student? (y/n): ";
        cin >> student;
        if (student == 'y' || student == 'Y') {
            fare = 70;
        } else {
            fare = 100;
        }
    }

    cout << "Your fare is KES " << fare << endl;

    return 0;
}
