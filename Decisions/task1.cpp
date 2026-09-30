// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Decisions Assignment
// Task 1: Pass or Fail (if ... else)

#include <iostream>
using namespace std;

int main() {
    int mark;

    cout << "Enter your mark: ";
    cin >> mark;

    // 50 and above is a pass
    if (mark >= 50) {
        cout << "Result: Pass" << endl;
    } else {
        cout << "Result: Fail" << endl;
    }

    return 0;
}
