// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Functions Assignment
// Task 2: Square and Cube (return int)

#include <iostream>
using namespace std;

int square(int n) {
    return n * n;
}

int cube(int n) {
    return square(n) * n;   // reuse square()
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << number << " squared is " << square(number) << endl;
    cout << number << " cubed is " << cube(number) << endl;

    return 0;
}
