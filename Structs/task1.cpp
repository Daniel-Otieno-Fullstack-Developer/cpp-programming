// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Structs Assignment
// Task 1: Student Record (struct + dot)

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int admission;
    string course;
    double mark;
};

int main() {
    Student s;
    s.name = "Amina Hassan";
    s.admission = 1041;
    s.course = "Web Design";
    s.mark = 78.5;

    cout << "Name:      " << s.name << endl;
    cout << "Admission: " << s.admission << endl;
    cout << "Course:    " << s.course << endl;
    cout << "Mark:      " << s.mark << endl;

    return 0;
}
