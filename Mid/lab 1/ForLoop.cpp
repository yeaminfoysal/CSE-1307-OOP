/*
Exercise 3 (For Loop):
Print all even numbers from 1 to 20.
*/


#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
