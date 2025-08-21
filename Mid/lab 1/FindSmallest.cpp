/*
Exercise 5:
Write a program that:
1. Takes 5 integers as input and stores them in an array.
2. Finds and prints the smallest number in the array.
Expected Output:
Enter 5 numbers: 8 3 9 1 5
Smallest number: 1
*/

#include <iostream>
using namespace std;

int main() {
    int numbers[5];

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    int smallest = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    cout << "Smallest number: " << smallest << endl;

    return 0;
}
