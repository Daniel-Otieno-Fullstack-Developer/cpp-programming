// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Pointers and References Assignment
// Task 4: Swap with References (reference parameters)

#include <iostream>
using namespace std;

// References: the call looks normal and there is no * inside.
// I find this version easier because it cannot be given nullptr.
void swapRef(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before: x = " << x << ", y = " << y << endl;
    swapRef(x, y);
    cout << "After:  x = " << x << ", y = " << y << endl;

    return 0;
}
