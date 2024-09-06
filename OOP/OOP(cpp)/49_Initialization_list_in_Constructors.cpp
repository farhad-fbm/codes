/*
Syntax for initialization list in constructor:

constructor (argument-list) : initilization-section{
    assignment + other code;
}*/


#include <bits/stdc++.h>
using namespace std;


class Test{
    int a,b;   //** a initialized first
public:
    //Test(int i, int j) : a(i), b(j){        //arg asign this section
    //Test(int i, int j) : b(j), a(i+b){      //** error -> “a” is being initialized first 
    
    Test(int i, int j) : a(i), b(a + j){      // okk
        cout << "Value of a,b=  "<<a<<","<<b<<endl;
    }
};

int main(){
    Test t(4, 6);
    return 0;
}