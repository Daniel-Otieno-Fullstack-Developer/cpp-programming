// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Functions Assignment
// Task 8: Factorial (loop or recursion)

#include <iostream>
using namespace std;

long long factorial(int n);   // prototype

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << "! = " << factorial(i) << endl;
    }

    return 0;
}

// Uses a loop: multiply 1 x 2 x ... x n
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
