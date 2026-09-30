// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Functions Assignment
// Task 3: Area Calculator (double functions)

#include <iostream>
using namespace std;

const double PI = 3.14159;

double rectangleArea(double length, double width) {
    return length * width;
}

double circleArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double length, width, radius;

    cout << "Rectangle length: ";
    cin >> length;
    cout << "Rectangle width: ";
    cin >> width;
    cout << "Circle radius: ";
    cin >> radius;

    cout << "Rectangle area: " << rectangleArea(length, width) << endl;
    cout << "Circle area: " << circleArea(radius) << endl;

    return 0;
}
