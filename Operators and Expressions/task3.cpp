// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Operators and Expressions Assignment
// Task 3: Time Converter (/ and % together)

#include <iostream>
using namespace std;

int main() {
    int totalSeconds;

    cout << "Enter a number of seconds: ";
    cin >> totalSeconds;

    // 3600 seconds in an hour, 60 seconds in a minute
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    cout << totalSeconds << " seconds is " << hours << " h " << minutes << " min " << seconds << " s" << endl;

    return 0;
}
