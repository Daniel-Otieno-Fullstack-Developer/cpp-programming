// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Data Types Assignment
// Task 6: About Me (string)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    string course;

    // getline reads the whole line, including the space between names
    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your course: ";
    getline(cin, course);

    cout << endl;
    cout << "Name: " << fullName << endl;
    cout << "Course: " << course << endl;

    // length() counts every character, including spaces
    cout << "Your name has " << fullName.length() << " characters" << endl;

    return 0;
}
