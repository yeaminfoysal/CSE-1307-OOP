#include <iostream>
using namespace std;

// Parent class: Vehicle
class Vehicle {
protected:
    string fuelType;
    int maxSpeed;

public:
    // Method to set vehicle details
    void setVehicleDetails(string fuel, int speed) {
        fuelType = fuel;
        maxSpeed = speed;
    }

    // Public method to display vehicle info
    void displayVehicleInfo() {
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
    }
};

// Child class: Car using protected inheritance
class Car : protected Vehicle {
private:
    string model;

public:
    // Method to set car details (including inherited members)
    void setCarDetails(string m, string fuel, int speed) {
        model = m;
        fuelType = fuel;     // accessible because it's protected
        maxSpeed = speed;    // accessible too
    }

    // Method to display car info
    void displayCarInfo() {
        cout << "Car Model: " << model << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
    }

    // Access parent class display method (optional)
    void displayVehiclePart() {
        displayVehicleInfo();
    }
};

// Main function to demonstrate usage
int main() {
    Car myCar;

    // Set details
    myCar.setCarDetails("Tesla Model S", "Electric", 250);

    // Display car-specific info
    cout << "---- Car Info ----" << endl;
    myCar.displayCarInfo();

    // Optionally show base class method (from inside Car)
    // cout << "---- Vehicle Info ----" << endl;
    // myCar.displayVehiclePart();

    return 0;
}
