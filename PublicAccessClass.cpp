#include <iostream>
using namespace std;

// Public access class
class Rectangle {
public:
    // Public member variables
    double length;
    double width;

    // Public member function to calculate area
    double calculateArea() {
        return length * width;
    }

    // Public member function to calculate perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

// Main function demonstrating usage
int main() {
    Rectangle rect;

    // Assign values directly to public members
    rect.length = 10.5;
    rect.width = 5.0;

    // Display results
    cout << "Rectangle Properties:" << endl;
    cout << "Length: " << rect.length << endl;
    cout << "Width: " << rect.width << endl;
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;

    return 0;
}
