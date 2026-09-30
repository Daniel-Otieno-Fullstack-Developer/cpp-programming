// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Data Types Assignment
// Task 3: Shopping Total (float)

#include <iostream>
using namespace std;

int main() {
    float pricePerItem;   // price can have decimals, e.g. 250.50
    int quantity;         // you cannot buy half an item, so quantity is an int

    cout << "Price per item: ";
    cin >> pricePerItem;

    cout << "How many: ";
    cin >> quantity;

    // A float multiplied by an int gives a float
    float total = pricePerItem * quantity;

    cout << "Total: " << total << endl;

    return 0;
}
