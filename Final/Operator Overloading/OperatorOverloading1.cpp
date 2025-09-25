/*
1. Create a Book class for a library.
Overload these operators:
● + (add copies)
● - (remove copies)
*/

#include<iostream>
using namespace std;

class Book {
    public:
        int copies;

         // Constructor
        Book(int c = 0) : copies(c) {}

        Book operator+(const Book &other){
            return Book(this->copies + other.copies);
        }

        void display() {
            cout << "Copies: " << copies << endl;
        }
};

int main(){
    Book book1(10), book2(5);

    Book book3 = book1 + book2;

    cout << "Bool1 + Book2: "; book3.display();
}