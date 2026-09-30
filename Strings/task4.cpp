// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Strings Assignment
// Task 4: Reverse a Word (backwards loop)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word, reversed;

    cout << "Enter a word: ";
    cin >> word;

    // Walk from the last index down to 0
    for (int i = word.length() - 1; i >= 0; i--) {
        reversed += word[i];
    }

    cout << "Reversed: " << reversed << endl;

    return 0;
}
