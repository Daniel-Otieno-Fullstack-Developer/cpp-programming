// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Operators and Expressions Assignment
// Task 7: Certificate Check (relational and logical operators)

#include <iostream>
using namespace std;

int main() {
    int mark, attendance;

    cout << "Enter the exam mark: ";
    cin >> mark;
    cout << "Enter attendance (%): ";
    cin >> attendance;

    // Relational operators give true or false
    bool passedExam = (mark >= 50);
    bool attendedEnough = (attendance >= 75);

    // && is true only when BOTH sides are true
    bool getsCertificate = passedExam && attendedEnough;

    // || is true when AT LEAST ONE side is true
    bool needsSupport = !passedExam || !attendedEnough;

    cout << boolalpha;
    cout << "Passed exam: " << passedExam << endl;
    cout << "Attended enough: " << attendedEnough << endl;
    cout << "Gets certificate: " << getsCertificate << endl;
    cout << "Needs support: " << needsSupport << endl;

    return 0;
}
