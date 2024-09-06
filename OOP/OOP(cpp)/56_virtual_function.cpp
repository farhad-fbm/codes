#include<iostream>
using namespace std;
class Base{
    public:
    int var_base=1;
    virtual void display(){   // make virtual
        cout<<"Dispalying Base variable "<<var_base<<endl;
    }
};

class Derived : public Base{
    public:
    int var_derived=2;
    void display(){
        cout<<"Dispalying Base variable "<<var_base<<endl;
        cout<<"Dispalying Derived variable "<<var_derived<<endl;
    }
};

int main(){
    Base  obj_base;
    Base * base_pointer;
    Derived obj_derived;
    
    base_pointer = &obj_derived;
    base_pointer->display();  // derived members ----virtual act ,opposite of default
    
    return 0;
}
/*
1.declared within a base class and redefined (called overriding) by a derived class.
2.function signature must match the original function present in the base class.
3.“one interface, multiple methods” philosophy that underlies polymorphism.
4.Supports run-time polymorphism

*/
