// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Strings Assignment
// Task 6: Email Check (find + substr)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string email;

    cout << "Enter your email: ";
    cin >> email;

    size_t at = email.find('@');

    // There must be an @ and a dot after it
    if (at == string::npos || email.find('.', at) == string::npos) {
        cout << "That email does not look valid" << endl;
    } else {
        cout << "Username: " << email.substr(0, at) << endl;
        cout << "Domain: " << email.substr(at + 1) << endl;
    }

    return 0;
}
