// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Functions Assignment
// Task 6: Swap Two Values (pass by reference)

#include <iostream>
using namespace std;

// & makes a and b references to the caller's variables,
// so the swap changes the originals, not copies
void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int first, second;

    cout << "Enter two numbers: ";
    cin >> first >> second;

    cout << "Before: first = " << first << ", second = " << second << endl;
    swapValues(first, second);
    cout << "After:  first = " << first << ", second = " << second << endl;

    return 0;
}
