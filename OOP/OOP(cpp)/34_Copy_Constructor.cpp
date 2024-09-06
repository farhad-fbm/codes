/*
A copy constructor creates a copy of another object.
for one object to resemble another object used to a copy constructor.
If no copy constructor exists compiler will supply its own copy constructor
*/

#include <bits/stdc++.h>
using namespace std;

class Number {
    int a;
    public:
    // function(constructor) overloading
    Number() { a = 0; }      //f(1)
    Number(int x) { a = x; } //f(2)
    Number(Number& ob){      //f(3) CopyConstructor
        cout<<"called copy cons"<<endl; 
        a=ob.a;} 
    void display() {cout<<"obj is: "<<a<<endl;}
};
int main() {
    Number x, y(4), zp;
    x.display(); //f(1) = 0
    y.display(); //f(2) = 4
    zp = y;      // zp pre declared  & don't allow-> zp(z)
    zp.display();//f(2) copy cons not called


    Number z2(y); //Copy constructor invoked
    z2.display(); //f(3) = 4

    Number z3 = y;
    z3.display(); //copy cons invoked
    return 0;
}