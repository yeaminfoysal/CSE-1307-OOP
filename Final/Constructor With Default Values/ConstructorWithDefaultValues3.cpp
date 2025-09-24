/*
Create a Car class with:
● Default constructor that sets make="Toyota", model="Camry", year=2023, price=25000.0
● Parameterized constructor
● Method to display car details
● Method to apply discount
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    double price;

public:
    // Default constructor
    Car() {
        make = "Toyota";
        model = "Camry";
        year = 2023;
        price = 25000.0;
    }

    // Parameterized constructor
    Car(string mke, string mdl, int yr, double prc) {
        make = mke;
        model = mdl;
        year = yr;
        price = prc;
    }

    // Method to display car details
    void displayDetails() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
    }

    // Method to apply discount (percentage)
    void applyDiscount(double percent) {
        if (percent > 0 && percent <= 100) {
            double discountAmount = price * percent / 100;
            price -= discountAmount;
            cout << "Discount of " << percent << "% applied." << endl;
        } else {
            cout << "Invalid discount percentage!" << endl;
        }
    }
};

int main() {
    Car car1; // Default constructor
    cout << "Default Car:" << endl;
    car1.displayDetails();

    Car car2("Honda", "Accord", 2024, 30000.0); // Parameterized constructor
    cout << "\nCustom Car:" << endl;
    car2.displayDetails();

    cout << "\nApplying discount to custom car:" << endl;
    car2.applyDiscount(10); // 10% discount
    car2.displayDetails();

    return 0;
}
