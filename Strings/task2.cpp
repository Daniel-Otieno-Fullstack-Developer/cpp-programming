// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Strings Assignment
// Task 2: Shout It (toupper)

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // toupper leaves digits, spaces and punctuation unchanged
    for (size_t i = 0; i < sentence.length(); i++) {
        sentence[i] = toupper(sentence[i]);
    }

    cout << sentence << endl;

    return 0;
}
