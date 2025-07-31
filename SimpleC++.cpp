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
