// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Decisions Assignment
// Task 6: Day of the Week (switch)

#include <iostream>
using namespace std;

int main() {
    int day;

    cout << "Enter a day number (1-7): ";
    cin >> day;

    // Each case ends with break so only one day prints
    switch (day) {
        case 1: cout << "Monday" << endl;    break;
        case 2: cout << "Tuesday" << endl;   break;
        case 3: cout << "Wednesday" << endl; break;
        case 4: cout << "Thursday" << endl;  break;
        case 5: cout << "Friday" << endl;    break;
        case 6: cout << "Saturday" << endl;  break;
        case 7: cout << "Sunday" << endl;    break;
        default: cout << "Invalid day" << endl;
    }

    return 0;
}
