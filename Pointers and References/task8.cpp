// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Pointers and References Assignment
// Task 8: Dynamic Marks (new[] / delete[])

#include <iostream>
using namespace std;

int main() {
    int count;

    cout << "How many students? ";
    cin >> count;

    int *marks = new int[count];   // size chosen at run time
    int total = 0;

    for (int i = 0; i < count; i++) {
        cout << "Mark " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    cout << "Average: " << static_cast<double>(total) / count << endl;

    delete[] marks;   // give the memory back
    marks = nullptr;

    return 0;
}
