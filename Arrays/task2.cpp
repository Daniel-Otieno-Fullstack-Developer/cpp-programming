// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Arrays Assignment
// Task 2: Total and Average (running total)

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    double prices[SIZE] = {250, 180.5, 99, 420, 75.5, 310};
    double total = 0;

    for (int i = 0; i < SIZE; i++) {
        total += prices[i];
    }

    cout << "Total: KES " << total << endl;
    cout << "Average: KES " << total / SIZE << endl;

    return 0;
}
