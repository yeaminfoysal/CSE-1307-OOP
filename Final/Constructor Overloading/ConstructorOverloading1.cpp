/*
Task 1: Create a Student class with overloaded constructors to handle different initialization scenarios.

Requirements:
1. Constructors:
○ Default: Sets name to "Unknown", age to 0, grade to 'N'
○ Partial: Takes name and age (default grade 'B')
○ Full: Takes name, age, and grade (must be A-F)\

2. Validation:
○ Reject negative ages
○ Reject invalid grades (set to 'N' if invalid)

3. Methods:
○ display() → Prints all student details
*/

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    char grade;

public:
    Student() {
        name = "Unknown";
        age = 0;
        grade = 'N';
    }

    Student(string n, int a) {
        if (a < 0) {
            cout << "Invalid age, setting default!" << endl;
            name = "Unknown";
            age = 0;
            grade = 'N';
        } else {
            name = n;
            age = a;
            grade = 'B';
        }
    }

    Student(string n, int a, char g) {
        if (a < 0) {
            cout << "Invalid age, setting default!" << endl;
            name = "Unknown";
            age = 0;
            grade = 'N';
        } else {
            name = n;
            age = a;

            if (g == 'A' || g == 'B' || g == 'C' || g == 'D' || g == 'E' || g == 'F') {
                grade = g;
            } else {
                cout << "Invalid grade, setting to 'N'!" << endl;
                grade = 'N';
            }
        }
    }

    void display() {
        cout << "\nName : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Grade : " << grade << endl;
    }
};

int main() {
    Student s1; 
    s1.display();

    Student s2("Yeamin", 20);
    s2.display();

    Student s3("Foysal", 21, 'A');
    s3.display();

    Student s4("Test", -5, 'Z');
    s4.display();

    return 0;
}
