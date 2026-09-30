// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Data Types Assignment
// Task 4: Circle Area (double)

#include <iostream>
using namespace std;

int main() {
    const double pi = 3.14159;
    double radius;   // double so that a radius like 2.5 is not cut down to 2

    cout << "Enter the radius: ";
    cin >> radius;

    double area = pi * radius * radius;
    double circumference = 2 * pi * radius;

    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}
