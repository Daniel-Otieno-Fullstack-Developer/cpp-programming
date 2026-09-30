// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Classes and Objects Assignment
// Task 6: Visitor Counter (state in an object)

#include <iostream>
using namespace std;

class Counter {
private:
    int count = 0;
public:
    void increment() { count++; }
    void reset() { count = 0; }
    int getCount() const { return count; }
};

int main() {
    Counter gate;

    for (int visitor = 1; visitor <= 7; visitor++) {
        gate.increment();
    }
    cout << "Visitors this morning: " << gate.getCount() << endl;

    gate.reset();
    gate.increment();
    gate.increment();
    cout << "Visitors after reset: " << gate.getCount() << endl;

    return 0;
}
