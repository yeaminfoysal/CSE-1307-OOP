/*
Create a Temperature class that can be initialized in different ways and converts between Celsius and Fahrenheit.

1. Constructors:
○ Default: Sets temperature to 0°C
○ From Celsius: Takes a Celsius value
○ From Fahrenheit: Takes a Fahrenheit value and converts to Celsius

2. Methods:
○ getCelsius() → Returns the temperature in Celsius
○ getFahrenheit() → Returns the temperature in Fahrenheit (converted from Celsius)

3. Conversion Formula:
○ Celsius to Fahrenheit:
○ F=(C×9/5)+32
○ Fahrenheit to Celsius:
○ C=(F−32)×5/9
*/

#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;

public: 
    // Default constructor
    Temperature() {
        celsius = 0.0;
    }

    // From Celsius
    Temperature(double c) {
        celsius = c;
    }

    // From Celsius or Fahrenheit depending on unit
    Temperature(double temp, string unit) {
        if (unit == "F" || unit == "f") {
            celsius = (temp - 32) * 5.0 / 9.0;  // Convert F → C
        } else {
            celsius = temp;  // Assume Celsius if not F
        }
    }

    double getCelsius() {
        return celsius;
    }

    double getFahrenheit() {
        return (celsius * 9.0 / 5.0) + 32;  // Convert C → F
    }
};

int main() {
    Temperature temp; // Default
    cout << "Default (C): " << temp.getCelsius() << endl;
    cout << "Default (F): " << temp.getFahrenheit() << endl;

    Temperature temp1(25); // Celsius input
    cout << "\nTemp1 in C: " << temp1.getCelsius() << endl;
    cout << "Temp1 in F: " << temp1.getFahrenheit() << endl;

    Temperature temp2(98.6, "F"); // Fahrenheit input
    cout << "\nTemp2 in C: " << temp2.getCelsius() << endl;
    cout << "Temp2 in F: " << temp2.getFahrenheit() << endl;
}
