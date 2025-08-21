/* Task 3: Access Private Members
Objective: Use friend function to display private data.
- Create class `Student` with:
- Private `name` (string), `gpa` (float)
- Declare friend function `printStudent()` that:
- Takes a `Student` object
- Prints name and GPA
Example:
Student s("Alice", 3.8);
printStudent(s); // Should print "Alice: 3.8" */

#include<iostream>
using namespace std;

class Student{
    private: 
        string name; 
        float gpa;

    public:
        Student(string n, float g){
            name= n;
            gpa= g;
        };
    
        friend void printStudent(Student);
};
void printStudent(Student s){
    cout<<s.name<<": "<<s.gpa<<endl;
};

int main(){
    Student student1("Alice", 4.14);

    printStudent(student1);
}