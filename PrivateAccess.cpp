#include <iostream>
using namespace std;

class Calculator {
private:
    // Private member variables
    double num1;
    double num2;

public:
    // Public setter methods
    void setNum1(double n1) {
        num1 = n1;
    }

    void setNum2(double n2) {
        num2 = n2;
    }

    // Public method to add the numbers
    double add() {
        return num1 + num2;
    }

    // Public method to multiply the numbers
    double multiply() {
        return num1 * num2;
    }
};

// Main function demonstrating usage
int main() {
    Calculator calc;

    // Set values using setter methods
    calc.setNum1(8.5);
    calc.setNum2(4.0);

    // Perform and display calculations
    cout << "Addition: " << calc.add() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;

    return 0;
}
