// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Functions Assignment
// Task 4: Is It Even? (bool function)

#include <iostream>
using namespace std;

// Returns true when number divides exactly by 2
bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        if (isEven(i)) {
            cout << i << " even" << endl;
        } else {
            cout << i << " odd" << endl;
        }
    }

    return 0;
}
