// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Data Types Assignment
// Task 1: My Initials (char)

#include <iostream>
using namespace std;

int main() {
    // A char holds one character and uses single quotes
    char firstInitial = 'D';
    char middleInitial = 'O';
    char lastInitial = 'O';

    cout << "My initials are: " << firstInitial << "." << middleInitial << "." << lastInitial << endl;

    // sizeof tells us how many bytes a type uses in memory
    cout << "A char uses " << sizeof(firstInitial) << " byte" << endl;

    return 0;
}
