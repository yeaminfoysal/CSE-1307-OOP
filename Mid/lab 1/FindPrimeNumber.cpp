/*
Exercise 6:
Write a function bool isPrime(int n) that checks if a number is prime. Use it in a
program to print all prime numbers between 1 and 50.
*/


#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;  // 0 and 1 are not prime
    for (int i = 2; i < n; i++) {  // Check divisibility up to sqrt(n)
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "Prime numbers between 1 and 50: ";
    for (int i = 1; i <= 50; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
