// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Loops Assignment
// Task 6: Star Triangle (nested for)

#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "How many rows? ";
    cin >> rows;

    for (int row = 1; row <= rows; row++) {
        // Each row has as many stars as its row number
        for (int star = 1; star <= row; star++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
