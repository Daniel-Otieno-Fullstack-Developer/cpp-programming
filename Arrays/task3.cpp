// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Arrays Assignment
// Task 3: Highest and Lowest (max / min)

#include <iostream>
using namespace std;

int main() {
    const int DAYS = 7;
    double temps[DAYS] = {24.5, 27.0, 22.5, 29.5, 26.0, 21.0, 25.5};

    int hotDay = 0, coldDay = 0;   // indexes of the extremes

    for (int i = 1; i < DAYS; i++) {
        if (temps[i] > temps[hotDay]) hotDay = i;
        if (temps[i] < temps[coldDay]) coldDay = i;
    }

    cout << "Hottest: " << temps[hotDay] << " on day " << hotDay + 1 << endl;
    cout << "Coldest: " << temps[coldDay] << " on day " << coldDay + 1 << endl;

    return 0;
}
