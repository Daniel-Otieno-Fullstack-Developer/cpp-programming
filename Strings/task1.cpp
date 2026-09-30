// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Strings Assignment
// Task 1: Name Details (getline + length)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName);   // reads spaces too

    cout << "Characters: " << fullName.length() << endl;
    cout << "First character: " << fullName[0] << endl;
    cout << "Last character: " << fullName[fullName.length() - 1] << endl;
    cout << "Initial: " << fullName[0] << "." << endl;

    return 0;
}
