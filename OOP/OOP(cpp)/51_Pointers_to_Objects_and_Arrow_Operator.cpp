#include <bits/stdc++.h>
using namespace std;

class A{
    int a,b;
    public:
    void set(int x,int y){a=x; b=y;}
    void get(){cout<<a<<" and "<<b<<endl;}
};

int main() {
    A a;
    a.set(1,2);
    a.get();
    

    A b;
    A *p= &b;       // ==  A *p= new A;
    (*p).set(3,4);  // ==  p->set(3,4);   
    (*p).get();     // ()must be------recedence  . > *


    A *ptr= new A;
    ptr->set(5,6);
    ptr->get();


    return 0;
}