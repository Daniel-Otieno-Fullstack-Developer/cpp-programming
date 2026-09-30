// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Structs Assignment
// Task 6: Shop Stock (pass by reference)

#include <iostream>
#include <string>
using namespace std;

struct Product {
    string name;
    int stock;
    double price;
};

void sell(Product &p, int qty) {
    if (qty > p.stock) {
        cout << "Cannot sell " << qty << ": only " << p.stock << " left" << endl;
    } else {
        p.stock -= qty;
        cout << "Sold " << qty << " for KES " << qty * p.price << endl;
    }
}

void restock(Product &p, int qty) {
    p.stock += qty;
    cout << "Restocked " << qty << endl;
}

int main() {
    Product tyre = {"Tyre 195/65 R15", 10, 6500};

    sell(tyre, 4);
    cout << "In stock: " << tyre.stock << endl;
    sell(tyre, 8);
    restock(tyre, 12);
    cout << "In stock: " << tyre.stock << endl;

    return 0;
}
