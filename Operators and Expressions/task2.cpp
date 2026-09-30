// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Operators and Expressions Assignment
// Task 2: Sharing Sweets (integer division and %)

#include <iostream>
using namespace std;

int main() {
    int sweets, students;

    cout << "How many sweets? ";
    cin >> sweets;
    cout << "How many students? ";
    cin >> students;

    // Integer division gives whole sweets only; % gives the ones that cannot be shared
    int eachGets = sweets / students;
    int leftOver = sweets % students;

    cout << "Each student gets " << eachGets << " sweets" << endl;
    cout << "Sweets left over: " << leftOver << endl;

    return 0;
}
