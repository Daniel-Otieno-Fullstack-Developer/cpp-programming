// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Data Types Assignment
// Task 7: Greeting Function (void)

#include <iostream>
using namespace std;

// A void function returns no value, so it needs no return statement
void showBanner() {
    cout << "*******************" << endl;
    cout << " WELCOME TO CLASS" << endl;
    cout << "*******************" << endl;
}

int main() {
    showBanner();   // banner at the start

    cout << "This is the main program." << endl;

    showBanner();   // banner at the end

    return 0;
}
