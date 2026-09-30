// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Pointers and References Assignment
// Task 1: Address and Value (& and *)

#include <iostream>
using namespace std;

int main() {
    int year = 2026;
    int *ptr = &year;   // ptr stores the address of year

    cout << "year  = " << year << endl;
    cout << "&year = " << &year << endl;
    cout << "ptr   = " << ptr << endl;    // same as &year
    cout << "*ptr  = " << *ptr << endl;   // same as year

    return 0;
}
