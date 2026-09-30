// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Arrays Assignment
// Task 5: Reverse Order (backwards loop)

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int numbers[SIZE];

    cout << "Enter " << SIZE << " numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    cout << "Reversed: ";
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
