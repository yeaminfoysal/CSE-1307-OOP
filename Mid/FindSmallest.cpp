#include <iostream>
using namespace std;

int main() {
    int numbers[5];

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    int smallest = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    cout << "Smallest number: " << smallest << endl;

    return 0;
}
