#include<iostream>
using namespace std;

class Vector {
public:
    int x, y;

    // Constructor with default values
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    // Overload + operator (pass by value)
    Vector operator+(Vector other) {
    return Vector(x + other.x, y + other.y);
}
};

class Vector {
public:
int x, y;

Vector(int x = 0, int y = 0) : x(x), y(y) {}

// Overload + operator (const reference দিয়ে)
Vector operator+(const Vector &other) {
return Vector(x + other.x, y + other.y);
}
};

int main() {
    Vector v1(3, 4);   // custom parameter দিয়ে initialize
    Vector v2(1, 2);   // আরেকটা custom parameter দিয়ে

    Vector v3 = v1 + v2;   // operator+ ব্যবহার হচ্ছে

    cout << v3.x << ", " << v3.y << endl;  // Output: 4, 6
}

