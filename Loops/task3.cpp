// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Loops Assignment
// Task 3: Class Average (while + sentinel)

#include <iostream>
using namespace std;

int main() {
    int mark, total = 0, count = 0;

    cout << "Enter a mark (-1 to finish): ";
    cin >> mark;

    // -1 is the signal to stop
    while (mark != -1) {
        total += mark;
        count++;
        cout << "Enter a mark (-1 to finish): ";
        cin >> mark;
    }

    if (count > 0) {
        double average = static_cast<double>(total) / count;
        cout << "Marks entered: " << count << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
    } else {
        cout << "No marks entered" << endl;
    }

    return 0;
}
