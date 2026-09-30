// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Decisions Assignment
// Task 4: Largest of Three (if + &&)

#include <iostream>
using namespace std;

int main() {
    int first, second, third;

    cout << "Enter three numbers: ";
    cin >> first >> second >> third;

    // A number is the largest if it is at least as big as both others
    if (first >= second && first >= third) {
        cout << "Largest: " << first << endl;
    } else if (second >= first && second >= third) {
        cout << "Largest: " << second << endl;
    } else {
        cout << "Largest: " << third << endl;
    }

    return 0;
}
