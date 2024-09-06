#include<iostream>
using namespace std;
class Base{
    public:
    int var_base;
    void display(){
        cout<<"Dispalying Base variable "<<var_base<<endl;
    }
};

class Derived : public Base{
    public:
    int var_derived;
    void display(){
        cout<<"Dispalying Base variable "<<var_base<<endl;
        cout<<"Dispalying Derived variable "<<var_derived<<endl;
    }
};

int main(){
    Derived obj_derived;
    Base * base_pointer;
    base_pointer = &obj_derived;       //B_pointer pointing to D_class
   
    // base_pointer->var_derived =44;  // error---base pointer access only base members 
    base_pointer->var_base = 34;      
    base_pointer->display();



    Derived * derived_pointer;         // D_pointer
    derived_pointer = &obj_derived;    //D_pointer pointing to derived class

    derived_pointer->var_base = 9448;  //D_pointer can access
    derived_pointer->var_derived = 98; // base & derived
    derived_pointer->display();

    return 0;
}
