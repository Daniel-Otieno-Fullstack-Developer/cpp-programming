// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Functions Assignment
// Task 1: Welcome Banner (void + parameter)

#include <iostream>
#include <string>
using namespace std;

// Prints a framed welcome message
void showWelcome(string name) {
    cout << "==========================" << endl;
    cout << "  Welcome, " << name << "!" << endl;
    cout << "==========================" << endl;
}

int main() {
    showWelcome("Amina");
    showWelcome("Brian");

    return 0;
}
