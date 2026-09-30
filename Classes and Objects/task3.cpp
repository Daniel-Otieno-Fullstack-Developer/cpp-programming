// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Classes and Objects Assignment
// Task 3: Safe Marks (getters + setters)

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int mark = 0;
public:
    void setName(string n) { name = n; }
    string getName() const { return name; }

    void setMark(int m) {
        // Only accept marks that make sense
        if (m >= 0 && m <= 100) {
            mark = m;
        } else {
            cout << "Invalid mark " << m << " ignored" << endl;
        }
    }
    int getMark() const { return mark; }
};

int main() {
    Student s;
    s.setName("Grace Wanjiku");
    s.setMark(84);
    s.setMark(120);

    cout << s.getName() << "'s mark is " << s.getMark() << endl;

    return 0;
}
