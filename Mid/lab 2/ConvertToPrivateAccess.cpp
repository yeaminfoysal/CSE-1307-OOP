/*
Task 2: Convert to Private Access
Modify the Calculator class to use private variables with public methods.
- Make 'num1' and 'num2' private
- Add public setter methods 'setNum1()' and 'setNum2()'
- Keep the existing add() and multiply() functions
- Demonstrate usage in main()
*/

#include <iostream>
using namespace std;

class Calculator
{
private:
    double num1;
    double num2;

public:
    void setNum1(double x)
    {
        num1 = x;
    };

    void setNum2(double y)
    {
        num2 = y;
    }

    double add()
    {
        return num1 + num2;
    };

    double multiply()
    {
        return num1 * num2;
    };
};

int main()
{
    Calculator c;
    c.setNum1(5);
    c.setNum2(3);

    cout << "Addition: " << c.add() << endl;
    cout << "Multiplication: " << c.multiply() << endl;
}