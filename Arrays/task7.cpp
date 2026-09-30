// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Arrays Assignment
// Task 7: Bubble Sort (sorting)

#include <iostream>
using namespace std;

void printArray(const int values[], int size) {
    for (int i = 0; i < size; i++) {
        cout << values[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 8;
    int marks[SIZE] = {64, 25, 12, 90, 33, 47, 71, 58};

    cout << "Before: ";
    printArray(marks, SIZE);

    for (int pass = 0; pass < SIZE - 1; pass++) {
        for (int i = 0; i < SIZE - 1 - pass; i++) {
            if (marks[i] > marks[i + 1]) {
                // swap the neighbours
                int temp = marks[i];
                marks[i] = marks[i + 1];
                marks[i + 1] = temp;
            }
        }
    }

    cout << "After:  ";
    printArray(marks, SIZE);

    return 0;
}
