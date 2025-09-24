/*
2. Compare Two Objects
Create a class Distance with private members:
● meters (int)
● centimeters (int)

Define a friend function compareDistance() that compares two Distance objects and prints which one is greater.

Example Input: 
Distance d1(5, 70); // 5m 70cm
Distance d2(6, 20); // 6m 20cm

Expected Output:
d2 is greater than d1
*/

#include<iostream>
using namespace std;

class Distance
{
private:
    int meters;
    int centimeters;

public:
    Distance(int m, int c){
        meters = m;
        centimeters = c;
    };

    friend void compareDistance(Distance d1, Distance d2);
};

void compareDistance( Distance d1, Distance d2){
    int total_d1 = d1.meters * 100 + d1.centimeters;
    int total_d2 = d2.meters * 100 + d2.centimeters;

    if(total_d1 > total_d2){
        cout<< "d1 is greater than d2" << endl;
    } else{
        cout<< "d2 is greater than d1" << endl;
    }
};

int main(){
    Distance d1(5, 70); // 5m 70cm
    Distance d2(6, 20); // 6m 20cm

    compareDistance( d1, d2);
}