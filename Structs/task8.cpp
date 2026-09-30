// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Structs Assignment
// Task 8: Class Report (structs + functions)

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    double mark;
    char grade;
};

char getGrade(double mark) {
    if (mark >= 70) return 'A';
    if (mark >= 60) return 'B';
    if (mark >= 50) return 'C';
    if (mark >= 40) return 'D';
    return 'E';
}

int main() {
    const int SIZE = 5;
    Student cls[SIZE] = {
        {"Amina", 78.5, ' '}, {"Brian", 64, ' '}, {"Grace", 91, ' '},
        {"Hassan", 47.5, ' '}, {"Joy", 55, ' '}
    };
    int passes = 0;

    // Work out every grade first
    for (int i = 0; i < SIZE; i++) {
        cls[i].grade = getGrade(cls[i].mark);
    }

    cout << "Name\tMark\tGrade" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << cls[i].name << "\t" << cls[i].mark << "\t" << cls[i].grade << endl;
        if (cls[i].mark >= 50) passes++;
    }
    cout << passes << " of " << SIZE << " students passed" << endl;

    return 0;
}
