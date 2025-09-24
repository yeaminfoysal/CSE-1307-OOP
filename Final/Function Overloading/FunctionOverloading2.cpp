/*
2. Create an overloaded display() function:
○ One version takes an integer and prints it.
○ Another version takes a string and prints it.
○ A third version takes an integer and a string and prints both.
*/
#include<iostream>
using namespace std;

void display(int a){
    cout << a << endl;
}

void display(string a){
    cout << a << endl;
}

void display(int a, string b){
    cout << a << " " << b << endl;
}

int main(){
    display(3);
    display("hello");
    display(9, "ariyan");
}