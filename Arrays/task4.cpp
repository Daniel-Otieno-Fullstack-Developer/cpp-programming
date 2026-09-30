// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Arrays Assignment
// Task 4: Find a Student (linear search)

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int admission[SIZE] = {1041, 1057, 1063, 1088, 1092, 1105};
    int wanted, position = -1;

    cout << "Admission number to find: ";
    cin >> wanted;

    for (int i = 0; i < SIZE; i++) {
        if (admission[i] == wanted) {
            position = i;
            break;   // stop once found
        }
    }

    if (position != -1) {
        cout << "Found at position " << position + 1 << " in the list" << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
