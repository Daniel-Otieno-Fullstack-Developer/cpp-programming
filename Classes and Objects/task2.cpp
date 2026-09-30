// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Classes and Objects Assignment
// Task 2: Rectangle Class (member functions)

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length = 0;
    double width = 0;
public:
    void setSize(double l, double w) {
        length = l;
        width = w;
    }
    double area() const { return length * width; }
    double perimeter() const { return 2 * (length + width); }
};

int main() {
    Rectangle plot;
    double l, w;

    cout << "Length and width: ";
    cin >> l >> w;
    plot.setSize(l, w);

    cout << "Area: " << plot.area() << endl;
    cout << "Perimeter: " << plot.perimeter() << endl;

    return 0;
}
