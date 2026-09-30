// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Loops Assignment
// Task 5: Skip the Odd Ones (continue)

#include <iostream>
using namespace std;

int main() {
    int total = 0;

    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            continue;   // skip odd numbers
        }
        cout << i << " ";
        total += i;
    }
    cout << endl << "Total of even numbers: " << total << endl;

    return 0;
}
