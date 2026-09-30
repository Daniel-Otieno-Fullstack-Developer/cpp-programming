// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Functions Assignment
// Task 5: Grade Function (char return)

#include <iostream>
using namespace std;

char getGrade(int mark) {
    if (mark >= 70) return 'A';
    if (mark >= 60) return 'B';
    if (mark >= 50) return 'C';
    if (mark >= 40) return 'D';
    return 'E';
}

int main() {
    int mark;

    for (int student = 1; student <= 3; student++) {
        cout << "Mark for student " << student << ": ";
        cin >> mark;
        cout << "Grade: " << getGrade(mark) << endl;
    }

    return 0;
}
