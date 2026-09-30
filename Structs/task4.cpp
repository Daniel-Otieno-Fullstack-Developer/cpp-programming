// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Structs Assignment
// Task 4: Class List (array of structs)

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    double mark;
};

int main() {
    const int SIZE = 4;
    Student cls[SIZE] = {
        {"Amina", 78.5}, {"Brian", 64}, {"Grace", 91}, {"Hassan", 47.5}
    };
    double total = 0;

    cout << "No\tName\tMark" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << i + 1 << "\t" << cls[i].name << "\t" << cls[i].mark << endl;
        total += cls[i].mark;
    }
    cout << "Class average: " << total / SIZE << endl;

    return 0;
}
