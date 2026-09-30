// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Arrays Assignment
// Task 6: Pass Counter (array + function)

#include <iostream>
using namespace std;

// const: this function only reads the array
int countPasses(const int marks[], int size) {
    int passes = 0;
    for (int i = 0; i < size; i++) {
        if (marks[i] >= 50) {
            passes++;
        }
    }
    return passes;
}

int main() {
    const int SIZE = 10;
    int marks[SIZE] = {67, 45, 82, 38, 55, 90, 49, 73, 61, 50};

    int passes = countPasses(marks, SIZE);

    cout << "Passes: " << passes << endl;
    cout << "Fails: " << SIZE - passes << endl;

    return 0;
}
