/*
Exercise 1:
Write a C++ program that asks for the user's name and age, then prints a greeting with their
name and the year they were born (assuming the current year is 2024).
Expected Output:
Enter your name: Alice
Enter your age: 20
Hello, Alice, you were born in2004!
*/


#include <iostream>

using namespace std;

int main() {
    char name[100];
    int age;
    const int currentYear = 2024;

    cout << "Enter your name: ";
    cin >> name;  // Reads only one word (no spaces)

    cout << "Enter your age: ";
    cin >> age;

    int birthYear = currentYear - age;

    cout << "Hello, " << name << ", you were born in" << birthYear << "!" << endl;

    return 0;
}
