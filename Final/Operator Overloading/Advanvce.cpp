#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

public:
    Distance(int m = 0, int c = 0) {
        meters = m;
        centimeters = c;
    }

    // helper: total centimeters
    int totalCm() const {
        return meters * 100 + centimeters;
    }

    // Overload >
    bool operator>(const Distance &other) {
        return this->totalCm() > other.totalCm();
    }

    // Overload ==
    bool operator==(const Distance &other) {
        return this->totalCm() == other.totalCm();
    }

    // Overload <
    bool operator<(const Distance &other) {
        return this->totalCm() < other.totalCm();
    }
};

int main() {
    Distance d1(5, 70); // 570 cm
    Distance d2(6, 20); // 620 cm

    if (d1 > d2)
        cout << "d1 is greater" << endl;
    else if (d1 == d2)
        cout << "Both are equal" << endl;
    else
        cout << "d2 is greater" << endl;
}
