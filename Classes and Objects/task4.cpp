// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Classes and Objects Assignment
// Task 4: Car Constructor (constructors)

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    string plate;
    int year;
public:
    Car() : make("Unknown"), plate("none"), year(0) {}

    Car(string m, string p, int y) : make(m), plate(p), year(y) {}

    void show() const {
        cout << make << " | " << plate << " | " << year << endl;
    }
};

int main() {
    Car blank;
    Car staffCar("Toyota Probox", "KDC 482M", 2019);

    blank.show();
    staffCar.show();

    return 0;
}
