// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Pointers and References Assignment
// Task 7: Min and Max (reference outputs)

#include <iostream>
using namespace std;

void minMax(const int values[], int size, int &low, int &high) {
    low = values[0];
    high = values[0];
    for (int i = 1; i < size; i++) {
        if (values[i] < low) low = values[i];
        if (values[i] > high) high = values[i];
    }
}

int main() {
    const int SIZE = 7;
    int temps[SIZE] = {24, 27, 22, 29, 26, 21, 25};
    int lowest, highest;

    minMax(temps, SIZE, lowest, highest);

    cout << "Lowest:  " << lowest << endl;
    cout << "Highest: " << highest << endl;

    return 0;
}
