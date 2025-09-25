/*
2. Create a MyString class.
Overload these operators:
● + (concatenate strings)
● == (compare strings)
ex: ‘HELLO’ + ‘WORLD’ output : ‘HELLO WORLD’
*/

#include<iostream>
using namespace std;

class MyString {
public:
    string strings;

    MyString(string str = "") {
        strings = str;
    }

    MyString operator+(const MyString &other) {
        return MyString(strings + " " + other.strings);
    }

    bool operator==(const MyString &other) {
        return strings == other.strings;
    }

    void display(){ 
        cout << strings <<endl; 
    }
};

int main() {
    MyString str1("HELLO"), str2("WORLD");
    MyString str3 = str1 + str2;

    str3.display();

    if (str1 == str2)
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;

    return 0;
}
