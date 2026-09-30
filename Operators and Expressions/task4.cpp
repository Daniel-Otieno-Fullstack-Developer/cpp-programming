// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Operators and Expressions Assignment
// Task 4: Average Mark (type casting)

#include <iostream>
using namespace std;

int main() {
    int mark1, mark2, mark3;

    cout << "Enter three marks: ";
    cin >> mark1 >> mark2 >> mark3;

    int total = mark1 + mark2 + mark3;

    // int / int throws the decimal part away
    int wrongAverage = total / 3;

    // Casting total to double first keeps the decimals
    double correctAverage = static_cast<double>(total) / 3;

    cout << "Total: " << total << endl;
    cout << "Average without cast: " << wrongAverage << endl;
    cout << "Average with cast: " << correctAverage << endl;

    return 0;
}
