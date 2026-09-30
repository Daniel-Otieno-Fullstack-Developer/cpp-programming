// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Operators and Expressions Assignment
// Task 8: Precedence Puzzle (order of operations)

#include <iostream>
using namespace std;

int main() {
    // * / and % are worked out before + and -
    // Brackets change the order
    cout << "2 + 3 * 4 = " << 2 + 3 * 4 << endl;
    cout << "(2 + 3) * 4 = " << (2 + 3) * 4 << endl;
    cout << "20 - 4 / 2 = " << 20 - 4 / 2 << endl;
    cout << "(20 - 4) / 2 = " << (20 - 4) / 2 << endl;
    cout << "10 % 3 * 2 = " << 10 % 3 * 2 << endl;       // same level: left to right
    cout << "10 % (3 * 2) = " << 10 % (3 * 2) << endl;

    return 0;
}

// Lesson: when in doubt, use brackets. They make the order clear to the
// compiler and to anyone reading your code.
