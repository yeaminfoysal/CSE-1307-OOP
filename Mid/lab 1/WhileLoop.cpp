/*
Exercise 4 (While Loop):
Keep asking the user to enter numbers until they enter 0, then print the sum of all entered
numbers.
Expected Output:
Enter numbers (0 to stop): 5 3 7 0
Sum: 15
*/


#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int num;

    cout << "Enter numbers (0 to stop): ";

    while (true) {
        cin >> num;
        if (num == 0) break;
        sum += num;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
