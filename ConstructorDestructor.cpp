#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int id;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        id = 0;
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    Student(string studentName, int studentId) {
        name = studentName;
        id = studentId;
        cout << "Parameterized constructor called for " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for student: " << name << ", ID: " << id << endl;
    }

    // Display method
    void displayInfo() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

// Main function
int main() {
    cout << "--- Creating student1 using default constructor ---" << endl;
    Student student1;
    student1.displayInfo();

    cout << "\n--- Creating student2 using parameterized constructor ---" << endl;
    Student student2("Alice", 101);
    student2.displayInfo();

    cout << "\n--- End of main(), destructors will be called automatically ---" << endl;

    return 0;
}
