// Author: Daniel Otieno Odero - ICT Department, Delhi College
// Course: C++ Programming - Structs Assignment
// Task 2: Book Details (input + getline)

#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
    double price;
};

int main() {
    Book b;

    cout << "Title: ";
    getline(cin, b.title);
    cout << "Author: ";
    getline(cin, b.author);
    cout << "Year: ";
    cin >> b.year;
    cout << "Price (KES): ";
    cin >> b.price;

    cout << endl << b.title << " by " << b.author
         << " (" << b.year << ") - KES " << b.price << endl;

    return 0;
}
