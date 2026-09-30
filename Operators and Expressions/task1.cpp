// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Operators and Expressions Assignment
// Task 1: Simple Calculator (+ - * / %)

#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;

    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;

    // The five arithmetic operators
    cout << "Sum: " << firstNumber + secondNumber << endl;
    cout << "Difference: " << firstNumber - secondNumber << endl;
    cout << "Product: " << firstNumber * secondNumber << endl;
    cout << "Quotient: " << firstNumber / secondNumber << endl;   // int / int drops the decimals
    cout << "Remainder: " << firstNumber % secondNumber << endl;  // % gives what is left over

    return 0;
}
