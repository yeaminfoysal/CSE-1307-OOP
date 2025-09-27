/*
Task 3: Create a Temperature class with:
● Private data: celsius
● Public methods:
○ setCelsius(temp) - set temperature in Celsius
○ setFahrenheit(temp) - set temperature via Fahrenheit
○ getCelsius() - return Celsius
○ getFahrenheit() - return Fahrenheit conversion
○ displayBoth()
Formula: Fahrenheit = (Celsius × 9/5) + 32
*/

#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;

public:
    // Constructor
    Temperature(double temp = 0.0) {
        celsius = temp;
    }

    // Set temperature in Celsius
    void setCelsius(double temp) {
        celsius = temp;
    }

    // Set temperature via Fahrenheit
    void setFahrenheit(double tempF) {
        celsius = (tempF - 32) * 5.0 / 9.0;
    }

    // Get Celsius
    double getCelsius() const {
        return celsius;
    }

    // Get Fahrenheit
    double getFahrenheit() const {
        return (celsius * 9.0 / 5.0) + 32;
    }

    // Display both
    void displayBoth() const {
        cout << "Celsius: " << celsius << " °C" << endl;
        cout << "Fahrenheit: " << getFahrenheit() << " °F" << endl;
    }
};

int main() {
    Temperature temp;

    // Set via Celsius
    temp.setCelsius(25);
    cout << "Set via Celsius:" << endl;
    temp.displayBoth();

    // Set via Fahrenheit
    temp.setFahrenheit(212);
    cout << "\nSet via Fahrenheit:" << endl;
    temp.displayBoth();

    return 0;
}
