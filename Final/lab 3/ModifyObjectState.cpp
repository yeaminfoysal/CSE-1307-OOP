/*
Task 1: Modify Object State
Objective: Pass an object to modify its private data.
- Create class `Counter` with:
- Private `count` (initialized to 0)
- Public `display()` method
- Write function `incrementCounter()` that:
- Takes a `Counter` object (pass by reference)
- Increments `count` by 1
Example:
Counter c;
incrementCounter(c);
c.display(); // Should show "Count: 1"
*/

#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter() {
        count = 0;
    }

    void display() {
        cout << "Count: " << count << endl;
    }

    friend void incrementCounter(Counter &c);
};

void incrementCounter(Counter &c) {
    c.count += 1;
}

int main() {
    Counter c;

    incrementCounter(c);  // increment count
    c.display();          // Output: Count: 1

    incrementCounter(c);  // increment again
    c.display();          // Output: Count: 2

    return 0;
}
