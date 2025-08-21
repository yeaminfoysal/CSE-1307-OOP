/*
Task 3: Implement Protected Inheritance
Create a 'Vehicle' parent class and 'Car' child class using protected members.
Requirements:
- Vehicle with protected: 'fuelType', 'maxSpeed'
- Car inherits from Vehicle and adds private: 'model'
- Include public display methods in both classes
- Demonstrate inheritance in main()
*/

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    protected:
        string fuelType;
        int maxSpeed;
    
    public:
        Vehicle(string fuel, int speed) {
            fuelType = fuel;
            maxSpeed = speed;
        }
};

class Car : public Vehicle {
    private:
        string model;

    public:
        /*
        void setCarDetails(string m, string fuel, int speed) {
            model = m;
            fuelType = fuel;     // accessible because it's protected
            maxSpeed = speed;    // accessible too
        }
        */
        Car(string fuel,  int speed, string m): Vehicle(fuel, speed){
             model = m;
        }
        void displayCarInfo() {
            cout << "Car Model: " << model << endl;
            cout << "Fuel Type: " << fuelType << endl;
            cout << "Max Speed: " << maxSpeed << " km/h" << endl;
        }
};
int main() {
    Car c("Petrol", 220, "Toyota Corolla");
    // c.setCarDetails("Tesla Model S", "Electric", 250);
    c.displayCarInfo();
}