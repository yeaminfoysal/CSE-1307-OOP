/*
Task 6: Overloading
Objective: Overload with different parameter types.
- Create overloaded `print()` functions that:
1. Print an integer
2. Print a string in reverse
3. Print an integer array
*/

#include <iostream>
#include <string>
using namespace std;

// Function to print an integer
void print(int n) {
    cout << n << endl;
}

// Function to print a string in reverse
void print(string s) {  // no const
    for (int i = s.length() - 1; i >= 0; i--) {
        cout << s[i];
    }
    cout << endl;
}

// Function to print an integer array
void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int num = 42;
    string str = "hello";
    int arr[] = {1, 2, 3};

    print(num);     // Output: 42
    print(str);     // Output: olleh
    print(arr, 3);  // Output: 1 2 3

    return 0;
}
