/*
1. Create a Rectangle class with:
● Default constructor that sets width=5, height=3
● Method to calculate and display area
● Method to display dimensions
*/

#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    // Default constructor
    Rectangle() {
        width = 5;
        height = 3;
    }

    // Method to calculate area
    double calculateArea() {
        return width * height;
    }

    // Method to display dimensions
    void displayDimensions() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }

    // Method to display area
    void displayArea() {
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;   // Default constructor called

    rect.displayDimensions(); // Output: Width: 5, Height: 3
    rect.displayArea();       // Output: Area: 15

    return 0;
}
