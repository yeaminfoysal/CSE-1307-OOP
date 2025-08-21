/*
Task 1: Create a Public Access Class
Implement a 'rangle' class with public length and width variables that calculates area and
perimeter.
- Public member variables: 'length', 'width'
- Public member functions: 'calculateArea()', 'calculatePerimeter()'
- Demonstrate usage in main() by creating a rangle and displaying its properties
*/

#include <iostream>
using namespace std;

class Rectangle
{
public:
    double length;
    double width;

    double calculateArea()
    {
        return length * width;
    };
    double calculatePerimeter()
    {
        return 2 * (length + width);
    };
};
int main()
{
    Rectangle r;
    r.length = 5;
    r.width = 4;
    cout << "Length: " << r.length << endl;
    cout << "Width: " << r.width << endl;
    cout << "Area: " << r.calculateArea() << endl;
    cout << "Perimeter: " << r.calculatePerimeter() << endl;
}