/*
    Destructor is an instance member function which is invoked automatically
    whenever an object is going to be destroyed.

    Meaning, a destructor is the last function
    that is going to be called before an object is destroyed.
*/
#include<iostream>
using namespace std;
int count = 0;
class Test {
    public:
    Test() {
        count++;
        cout << "No. of Object created:\t" << count << endl;
    }

    ~Test() {
        cout << "No. of Object destroyed:\t" << count << endl;
        --count;
    }
};

main() {
    Test t, t1, t2, t3;
    return 0;
}

/*
Destructor:
    1.The destructor is only one way to destroy the object
        create by constructor(called when object goes out of scope).
    2.Hence destructor can-not be overloaded.
        It's not possible to define more than one destructor.
    3.It's release memory space occupied by the objects created by constructor.
    4.objects are destroyed in the reverse of an object creation.

***if the object is created by using new
    or the constructor uses new to allocate memory
    which resides in the heap memory or the free store,
    the destructor should use delete to free the memory.*****


propertise
    ***A destructor should be declared in the public section of the class.
    1.It cannot be declared static or const.
    2.The destructor does not have arguments.
    3.It has no return type not even void.
    4.An object of a class with a Destructor cannot become a member of the union.
    5.The programmer cannot access the address of destructor.

Calling
    Destructor called automatically when the object goes out of scope:
    1.the function ends
    2.the program ends
    3.a block containing local variables ends
    4.a delete operator is called
*/
