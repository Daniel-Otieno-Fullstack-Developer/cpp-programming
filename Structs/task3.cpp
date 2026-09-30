// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Structs Assignment
// Task 3: Rectangle (struct + functions)

#include <iostream>
using namespace std;

struct Rectangle {
    double length;
    double width;
};

double area(const Rectangle &r) {
    return r.length * r.width;
}

double perimeter(const Rectangle &r) {
    return 2 * (r.length + r.width);
}

int main() {
    Rectangle room;

    cout << "Length: ";
    cin >> room.length;
    cout << "Width: ";
    cin >> room.width;

    cout << "Area: " << area(room) << endl;
    cout << "Perimeter: " << perimeter(room) << endl;

    return 0;
}
