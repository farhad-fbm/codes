/*
1.Simply another name for a variable
2.Must be initialized when it is declared

int &ref;    // compiler error (exception: class member)
int x=5;
int &ref=x;  // ok
ref=100;
cout<<x;     // prints “100”



1.can pass a parameter to functions using references
2.No copy is made, destructor is not called when the function ends
3.As reference is not a pointer,use (.) to access members through an object reference
*/
#include <bits/stdc++.h>
using namespace std;

void p(int* n){ *n=100;}     // declare  *n --pointer     
void r(int &n){  n=200;}     // declare  &n --reference

int main() {
    int i=0; p(&i); cout<<i<<endl;  //pass &i -- pointer
    int j=0; r(j);  cout<<j<<endl;  //pass  i -- reference
    return 0;
}


/*
1.A pointer can be re-assigned any number of times 
    while a reference cannot be re-assigned.
2.Pointers can point no where (NULL), 
    whereas reference always refer to an object.
3.can't access the address of a reference (like pointers)
    member-access with pointers uses ->
    member-access with references uses .
4.pointer arithmetic (increment,decrement),cann't be done with reference.
5.cannot create arrays of references (like pointers)
*/