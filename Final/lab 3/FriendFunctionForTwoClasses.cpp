/*
Task 4: Friend Function for Two Classes Objective: Access private members from different classes. - Create two classes: - Temperature (private celsius) - Humidity (private percentage) - Write friend function displayWeather() that: - Takes both objects - Prints combined weather data Example: Temperature t(25.5); Humidity h(70); displayWeather(t, h); // Should print "25.5°C, 70% humidity"
*/
#include <iostream>
using namespace std;

// Forward declaration
class Humidity;

class Temperature {
private:
    double celsius;
public:
    Temperature(double c) {
        celsius = c;
    }
    friend void displayWeather(Temperature t, Humidity h);
};

class Humidity {
private:
    int percentage;
public:
    Humidity(int p) {
        percentage = p;
    }
    friend void displayWeather(Temperature t, Humidity h);
};

void displayWeather(Temperature t, Humidity h) {
    cout << t.celsius << "°C, " << h.percentage << "% humidity" << endl;
}

int main() {
    Temperature t(25.5);
    Humidity h(70);

    displayWeather(t, h);

    return 0;
}
