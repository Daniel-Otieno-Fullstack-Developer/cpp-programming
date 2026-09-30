// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Pointers and References Assignment
// Task 5: Array Walk (pointer arithmetic)

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int marks[SIZE] = {67, 82, 45, 90, 73, 58};
    int total = 0;

    // p starts at the first element and moves one element at a time
    for (int *p = marks; p < marks + SIZE; p++) {
        cout << *p << " ";
        total += *p;
    }

    cout << endl << "Total: " << total << endl;

    return 0;
}
