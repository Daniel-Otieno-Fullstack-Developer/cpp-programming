// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Classes and Objects Assignment
// Task 8: Person and Student (inheritance)

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;   // visible to classes that inherit from Person
public:
    Person(string n) : name(n) {}
    void introduce() const {
        cout << "My name is " << name << "." << endl;
    }
};

// A Student is a Person with a course
class Student : public Person {
private:
    string course;
public:
    Student(string n, string c) : Person(n), course(c) {}
    void enrol() const {
        cout << name << " is enrolled in " << course << "." << endl;
    }
};

int main() {
    Student s("Hassan Abdi", "IBM Full Stack Software Developer");

    s.introduce();   // inherited from Person
    s.enrol();       // Student's own function

    return 0;
}
