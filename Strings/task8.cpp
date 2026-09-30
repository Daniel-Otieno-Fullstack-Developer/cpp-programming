// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Strings Assignment
// Task 8: Username Generator (substr + to_string)

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string first, surname, username;
    int year;

    cout << "First name: ";
    cin >> first;
    cout << "Surname: ";
    cin >> surname;
    cout << "Year joined: ";
    cin >> year;

    string raw = first.substr(0, 3) + surname + to_string(year % 100);

    // Build the username in small letters
    for (char ch : raw) {
        username += static_cast<char>(tolower(ch));
    }

    cout << "Your username is " << username << endl;

    return 0;
}
