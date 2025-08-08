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
