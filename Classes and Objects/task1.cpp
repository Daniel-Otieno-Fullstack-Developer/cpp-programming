// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Classes and Objects Assignment
// Task 1: First Class (class + object)

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    string course;

    void introduce() {
        cout << "Hi, I am " << name << " and I study " << course << "." << endl;
    }
};

int main() {
    Student first, second;

    first.name = "Amina";
    first.course = "Web Design";
    second.name = "Brian";
    second.course = "Java Programming";

    first.introduce();
    second.introduce();

    return 0;
}
