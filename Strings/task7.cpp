// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Strings Assignment
// Task 7: Word Counter (isspace)

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string sentence;
    int words = 0;
    bool inWord = false;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for (char ch : sentence) {
        if (isspace(ch)) {
            inWord = false;
        } else if (!inWord) {
            words++;        // a new word has started
            inWord = true;
        }
    }

    cout << "Words: " << words << endl;
    cout << "Characters: " << sentence.length() << endl;

    return 0;
}
