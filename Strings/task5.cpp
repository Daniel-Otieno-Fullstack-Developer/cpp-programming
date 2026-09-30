// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Strings Assignment
// Task 5: Palindrome Check (compare)

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string word, lower, reversed;

    cout << "Enter a word: ";
    cin >> word;

    // Make everything small letters so case does not matter
    for (char ch : word) {
        lower += static_cast<char>(tolower(ch));
    }
    for (int i = lower.length() - 1; i >= 0; i--) {
        reversed += lower[i];
    }

    if (lower == reversed) {
        cout << word << " is a palindrome" << endl;
    } else {
        cout << word << " is not a palindrome" << endl;
    }

    return 0;
}
