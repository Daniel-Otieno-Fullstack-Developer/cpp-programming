// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Decisions Assignment
// Task 3: Grade Calculator (else if)

#include <iostream>
using namespace std;

int main() {
    int mark;

    cout << "Enter the mark: ";
    cin >> mark;

    // Reject impossible marks before grading
    if (mark < 0 || mark > 100) {
        cout << "Invalid mark. Enter 0 to 100." << endl;
    } else if (mark >= 70) {
        cout << "Grade: A" << endl;
    } else if (mark >= 60) {
        cout << "Grade: B" << endl;
    } else if (mark >= 50) {
        cout << "Grade: C" << endl;
    } else if (mark >= 40) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: E" << endl;
    }

    return 0;
}
