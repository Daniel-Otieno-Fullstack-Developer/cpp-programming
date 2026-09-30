// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Strings Assignment
// Task 3: Vowel Counter (loop + tolower)

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text;
    int vowels = 0;

    cout << "Enter a sentence: ";
    getline(cin, text);

    for (size_t i = 0; i < text.length(); i++) {
        char ch = tolower(text[i]);   // so 'A' counts as 'a'
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    cout << "Vowels: " << vowels << endl;

    return 0;
}
