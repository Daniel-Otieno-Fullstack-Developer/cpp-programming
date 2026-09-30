// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Loops Assignment
// Task 1: Count to Ten (for)

#include <iostream>
using namespace std;

int main() {
    // Count up
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Count down
    for (int i = 10; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
