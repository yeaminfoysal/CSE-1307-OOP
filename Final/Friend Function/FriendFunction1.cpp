/*
1. Create a class Student with private members:
● name (string)
● marks (float)
Define a friend function displayStudent() that prints the student's name and marks.
Expected Output:
Name: Alice
Marks: 95.5
*/


#include<iostream>
using namespace std;

class Student {
private: 
    string name;
    float marks;

public:
    Student(string n, float m) {
        name = n;
        marks = m;
    }

    friend void displayStudent(Student);
};

void displayStudent(Student s) {
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student s1("Alice", 95.5);
    Student s2("Bob", 88.0);

    displayStudent(s1);
    displayStudent(s2);

    return 0;
}
