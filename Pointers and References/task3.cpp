// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Pointers and References Assignment
// Task 3: Swap with Pointers (pointer parameters)

#include <iostream>
using namespace std;

void swapPtr(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before: x = " << x << ", y = " << y << endl;
    swapPtr(&x, &y);   // pass the addresses
    cout << "After:  x = " << x << ", y = " << y << endl;

    return 0;
}
