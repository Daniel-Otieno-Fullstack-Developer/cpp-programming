// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Pointers and References Assignment
// Task 6: Null Check (nullptr)

#include <iostream>
using namespace std;

void showValue(const int *p) {
    if (p == nullptr) {
        cout << "No value" << endl;
    } else {
        cout << "Value: " << *p << endl;
    }
}

int main() {
    int *empty = nullptr;
    int marks = 88;

    showValue(empty);
    showValue(&marks);

    return 0;
}
