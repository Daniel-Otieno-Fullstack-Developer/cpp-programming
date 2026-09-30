// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Arrays Assignment
// Task 8: Class Marks Table (2D array)

#include <iostream>
using namespace std;

int main() {
    const int STUDENTS = 3, SUBJECTS = 4;
    int marks[STUDENTS][SUBJECTS] = {
        {67, 72, 58, 80},
        {45, 60, 52, 49},
        {88, 91, 79, 85}
    };

    cout << "Student\tEng\tMath\tICT\tBus\tTotal\tAverage" << endl;

    for (int s = 0; s < STUDENTS; s++) {
        int total = 0;   // new total for each student
        cout << s + 1 << "\t";
        for (int sub = 0; sub < SUBJECTS; sub++) {
            cout << marks[s][sub] << "\t";
            total += marks[s][sub];
        }
        cout << total << "\t" << static_cast<double>(total) / SUBJECTS << endl;
    }

    return 0;
}
