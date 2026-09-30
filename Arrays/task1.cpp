// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Arrays Assignment
// Task 1: Five Marks (declare + loop)

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int marks[SIZE];

    // Read the marks
    for (int i = 0; i < SIZE; i++) {
        cout << "Mark " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Print them back
    cout << endl << "You entered:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Student " << i + 1 << " - " << marks[i] << endl;
    }

    return 0;
}
