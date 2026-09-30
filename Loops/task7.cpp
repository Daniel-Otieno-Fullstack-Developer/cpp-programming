// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Loops Assignment
// Task 7: Guess the Number (while + break)

#include <iostream>
using namespace std;

int main() {
    const int secret = 42;
    int guess, guesses = 0;

    while (true) {
        cout << "Your guess: ";
        cin >> guess;
        guesses++;

        if (guess < secret) {
            cout << "Too low" << endl;
        } else if (guess > secret) {
            cout << "Too high" << endl;
        } else {
            cout << "Correct! You needed " << guesses << " guesses." << endl;
            break;   // leave the loop
        }
    }

    return 0;
}
