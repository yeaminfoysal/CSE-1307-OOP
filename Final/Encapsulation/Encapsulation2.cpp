/*
Task 2: Create a Student class with:
● Private data: name, marks[5] (array of 5 subjects), total, percentage
● Public methods:
○ setMarks() - input marks for 5 subjects (0-100)
○ calculateTotal() - calculate total marks
○ calculatePercentage() - calculate percentage
○ getGrade() - return grade based on percentage
○ displayResult()
Validation: Marks should be between 0-100
*/


#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks[5];
    int total;
    double percentage;

public:
    // Constructor
    Student(string n = "Unknown") {
        name = n;
        total = 0;
        percentage = 0.0;
        for (int i = 0; i < 5; i++)
            marks[i] = 0;
    }

    // Input marks for 5 subjects
    void setMarks() {
        cout << "Enter marks for 5 subjects (0-100): " << endl;
        for (int i = 0; i < 5; i++) {
            int m;
            do {
                cout << "Subject " << i + 1 << ": ";
                cin >> m;
                if (m < 0 || m > 100)
                    cout << "Invalid marks! Enter again." << endl;
            } while (m < 0 || m > 100);
            marks[i] = m;
        }
    }

    // Calculate total
    void calculateTotal() {
        total = 0;
        for (int i = 0; i < 5; i++)
            total += marks[i];
    }

    // Calculate percentage
    void calculatePercentage() {
        percentage = total / 5.0;
    }

    // Return grade
    char getGrade() {
        if (percentage >= 90)
            return 'A';
        else if (percentage >= 80)
            return 'B';
        else if (percentage >= 70)
            return 'C';
        else if (percentage >= 60)
            return 'D';
        else if (percentage >= 50)
            return 'E';
        else
            return 'F';
    }

    // Display result
    void displayResult() {
        cout << "\nStudent Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";
        cout << "\nTotal: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << getGrade() << endl;
    }
};

int main() {
    Student s1("Alice");

    s1.setMarks();          // input marks
    s1.calculateTotal();    // total
    s1.calculatePercentage(); // percentage
    s1.displayResult();     // display all

    return 0;
}
