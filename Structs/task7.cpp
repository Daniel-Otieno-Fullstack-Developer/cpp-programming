// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Structs Assignment
// Task 7: Date of Birth (nested struct)

#include <iostream>
#include <string>
using namespace std;

struct Date {
    int day, month, year;
};

struct Person {
    string name;
    Date born;   // a struct inside a struct
};

int main() {
    Person p;

    cout << "Name: ";
    getline(cin, p.name);
    cout << "Date of birth (day month year): ";
    cin >> p.born.day >> p.born.month >> p.born.year;

    cout << p.name << " was born on " << p.born.day << "/" << p.born.month
         << "/" << p.born.year << endl;
    cout << "Age in 2026: " << 2026 - p.born.year << endl;

    return 0;
}
