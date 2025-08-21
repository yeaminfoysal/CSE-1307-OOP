/*
Exercise 2:
Write a program that takes an integer input and determines if it is positive, negative, or zero.
Expected Output:
Enter a number: -5
Negative
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "Positive" << endl;
    } else if (number < 0) {
        cout << "Negative" << endl;
    } else {
        cout << "Zero" << endl;
    }

    return 0;
}
