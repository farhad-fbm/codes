#include <iostream>
using namespace std;

// Base(/Super) Class
class Employee {
    public:
    int id;
    Employee(int id1) { id = id1; }
    void get() { cout << id << endl; }
    Employee() {}  //******
};
//Derived(/Sub) class
//class <derived_class> : <MODE access-specifier> <base_class>
class Programmer : public Employee {
    public:
    Programmer(int id2) { id = id2; }   //--->id
};


int main() {
    Employee fbm(1);
    fbm.get();


    Programmer skillF(10);
    skillF.get();  //base class function called by derived
    return 0;
}

/*
Modes of Inheritance(3):
    private members of base class cann't be directly accessed in the derived class,
    while protected members can be directly accessed.
Public Mode:
    public member of the base class will become public in the derived class and
    protected members of the base class will become protected in the derived class.
Protected Mode:
    both public members and protected members of the base class
    will become protected in the derived class.
Private Mode:(Default)******
    both public members and protected members of the base class
    will become Private in the derived class.




Single inheritance
Multilevel inheritance-------inner level of outer level
Multiple inheritance---------multiple to one
Hierarchical inheritance-----tree(one to may)
Hybrid inheritance
*/

