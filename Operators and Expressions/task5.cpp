// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Operators and Expressions Assignment
// Task 5: Counter (++ and --)

#include <iostream>
using namespace std;

int main() {
    int count = 5;

    cout << "Start: " << count << endl;

    // Postfix: use the value first, then add 1
    cout << "count++ shows " << count++ << endl;
    cout << "Now count is " << count << endl;

    // Prefix: add 1 first, then use the value
    cout << "++count shows " << ++count << endl;

    // The same rules apply to --
    cout << "count-- shows " << count-- << endl;
    cout << "--count shows " << --count << endl;

    cout << "Final: " << count << endl;

    return 0;
}
