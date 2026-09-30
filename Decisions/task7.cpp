// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Decisions Assignment
// Task 7: Menu Calculator (switch on char)

#include <iostream>
using namespace std;

int main() {
    double first, second;
    char op;

    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter an operator (+ - * /): ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> second;

    switch (op) {
        case '+': cout << "Answer: " << first + second << endl; break;
        case '-': cout << "Answer: " << first - second << endl; break;
        case '*': cout << "Answer: " << first * second << endl; break;
        case '/':
            // Dividing by zero is not allowed
            if (second == 0) {
                cout << "Cannot divide by zero" << endl;
            } else {
                cout << "Answer: " << first / second << endl;
            }
            break;
        default: cout << "Unknown operator" << endl;
    }

    return 0;
}
