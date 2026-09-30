// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Pointers and References Assignment
// Task 2: Change Through a Pointer (dereference)

#include <iostream>
using namespace std;

int main() {
    double price;
    double *p = &price;

    cout << "Price before VAT: ";
    cin >> price;

    *p *= 1.16;   // change price through the pointer

    cout << "Price with VAT: " << price << endl;

    return 0;
}
