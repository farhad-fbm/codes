#include <bits/stdc++.h>
using namespace std;

class largest{
    int a,b;
    public:
    void set();
    friend void sum(largest);
};
void largest :: set(){ cin>>a>>b;}

void sum (largest t){ cout<< (t.a + t.b) ; }

int main() {
    largest a;
    a.set();
    sum(a);
    return 0;
}

/*
1.Friend functions need to access the members(private, public or protected) of a class 
2.through an object of that class.
3.The object can be declared within or passed to the friend function.
4.A member function can directly access class members.
5.A function can be a member of one class and a friend of another


Why friend functions?
1.Permitting one function to have access to the private members of one or more different classes
2.Used in Operator overloading
3.Certain types of I/O operations
*/