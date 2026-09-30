// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Structs Assignment
// Task 5: Top Student (search by member)

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    double mark;
};

int main() {
    const int SIZE = 3;
    Student cls[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Name of student " << i + 1 << ": ";
        getline(cin, cls[i].name);
        cout << "Mark: ";
        cin >> cls[i].mark;
        cin.ignore(1000, '\n');   // clear the Enter before the next getline
    }

    int top = 0;
    for (int i = 1; i < SIZE; i++) {
        if (cls[i].mark > cls[top].mark) {
            top = i;
        }
    }

    cout << "Top student: " << cls[top].name << " with " << cls[top].mark << endl;

    return 0;
}
