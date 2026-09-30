// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Data Types Assignment
// Task 8: Size Table (modifiers & sizeof)

#include <iostream>
using namespace std;

int main() {
    // \t lines the values up in two columns
    cout << "Type\t\tBytes" << endl;
    cout << "char\t\t" << sizeof(char) << endl;
    cout << "short\t\t" << sizeof(short) << endl;
    cout << "int\t\t" << sizeof(int) << endl;
    cout << "long\t\t" << sizeof(long) << endl;
    cout << "float\t\t" << sizeof(float) << endl;
    cout << "double\t\t" << sizeof(double) << endl;
    cout << "bool\t\t" << sizeof(bool) << endl;

    return 0;
}

// Result: double uses the most memory (8 bytes). On 64-bit Linux and macOS,
// long is also 8 bytes; on Windows, long is 4 bytes, so double is the largest alone.
