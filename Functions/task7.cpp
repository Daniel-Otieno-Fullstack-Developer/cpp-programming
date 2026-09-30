// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Functions Assignment
// Task 7: Biggest Number (overloading)

#include <iostream>
using namespace std;

int biggest(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

// Same name, three parameters: C++ picks the right version
int biggest(int a, int b, int c) {
    return biggest(biggest(a, b), c);
}

int main() {
    cout << "Biggest of 12 and 30: " << biggest(12, 30) << endl;
    cout << "Biggest of 12, 30 and 25: " << biggest(12, 30, 25) << endl;
    cout << "Biggest of 44, 9 and 17: " << biggest(44, 9, 17) << endl;

    return 0;
}
