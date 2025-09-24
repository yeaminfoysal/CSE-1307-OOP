/*
1. Create an overloaded multiply() function:
○ One version takes two integers and returns their product.
○ Another version takes three integers and returns their product.
○ A third version takes two floats and returns their product.
*/

#include<iostream>
using namespace std;

int multiply(int a, int b){
    return a*b;
}

int multiply(int a, int b, int c){
    return a*b*c;
}

int main(){
    cout<< multiply(1, 4) << endl;
    cout<< multiply(1, 4, 3) << endl;
}