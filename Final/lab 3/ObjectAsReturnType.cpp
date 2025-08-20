/*
Task 2: Object as Return Type
Objective: Return an object from a function.
- Create class `Rectangle` with:
- Private `length`, `width`
- Public method `area()`
- Write function `createSquare()` that:
- Takes one integer (side length)
- Returns a `Rectangle` object (equal length/width)
Example:
Rectangle sq = createSquare(5);
cout << sq.area(); // Should display "25"
*/

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }
};

Rectangle createSquare(int side) {
    Rectangle sq(side, side);
    return sq; 
}

int main() {
    Rectangle sq = createSquare(5);
    cout << sq.area() << endl;

    return 0;
}
