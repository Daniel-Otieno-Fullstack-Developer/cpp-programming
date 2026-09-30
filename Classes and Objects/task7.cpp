// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Classes and Objects Assignment
// Task 7: Stock List (array of objects)

#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    int qty;
    double price;
public:
    Product(string n, int q, double p) : name(n), qty(q), price(p) {}

    double value() const { return qty * price; }

    void show() const {
        cout << name << " - " << qty << " @ KES " << price
             << " = KES " << value() << endl;
    }
};

int main() {
    const int SIZE = 3;
    Product shelf[SIZE] = {
        Product("Engine oil 4L", 10, 3200),
        Product("Brake pads", 6, 2800),
        Product("Wiper blade", 15, 650)
    };
    double total = 0;

    for (int i = 0; i < SIZE; i++) {
        shelf[i].show();
        total += shelf[i].value();
    }
    cout << "Total stock value: KES " << total << endl;

    return 0;
}
