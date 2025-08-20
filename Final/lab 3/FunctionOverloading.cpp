/*
Task 5: Basic Overloading
Objective: Overload with different parameter counts.
- Create overloaded `add()` functions that:
1. Add two integers
2. Add three integers
3. Add two floats
Example:
cout << add(2,3); // Output: 5
cout << add(1,2,3); // Output: 6
cout << add(1.5f,2.5f); // Output: 4.0
*/

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    cout << "Add two integers: " << add(2, 3) << endl;  
    cout << "Add three integers: " << add(1, 2, 3) << endl;
    cout << "Add two floats: " << add(1.5f, 2.5f) << endl; 

    return 0;
}
