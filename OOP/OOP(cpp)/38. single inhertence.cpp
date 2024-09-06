#include <bits/stdc++.h>
using namespace std;

class base {
    int data_pr;

    public:
    int data_pb;
    int set() { data_pr = 10; data_pb = 20; }
    int get_pr() { return data_pr; }
    int get_pb() { return data_pb; }
};


class derived : public base {   // derived class can't acces 
    int data_pr2;               // private members directly

    public:                                           // by
    void process() { data_pr2 = data_pb * get_pr(); } // get_pr()                                                    
    void display() {                                  // indirectly access private 
        cout << "base class private data " << get_pr() << endl
            << "base class public data " << data_pb << endl
            << "derived class private data " << data_pr2 << endl;
    }

};


int main() {
    derived der;
    der.set();   // base set()   called by derived class
    der.process();
    der.display();

    return 0;
}