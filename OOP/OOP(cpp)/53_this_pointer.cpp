#include <bits/stdc++.h>
using namespace std;

class A{
    int a;
    public:
    //void set(int a){ this->a =a;}
    A & set(int a) { this->a =a;  return *this; }  //this pointer is generally used to access member variables
    void get(){ cout<<"value of a: "<<a<<endl;}
};
int main() {
    A a;
    // a.set(4);
    // a.get();

    a.set(4).get();
    return 0;
}

/*
“this” is a keyword that is an implicit pointer. 
“this” pointer points to the object which calls the member function.
*/