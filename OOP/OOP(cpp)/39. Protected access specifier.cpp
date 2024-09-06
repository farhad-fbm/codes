/*
Protect like Private,
but it can be inherited
*/


#include <bits/stdc++.h>
using namespace std;

class base {
    int a;
    protected:
    int b;
};
class derived : protected base {

};
int main() {
    base B;
    derived D;

    //  Cout<<D.b   error,since  b is protected in both
    return 0;    // base as well as derived class

}

/*                          Private Derivation      Protected Derivation       Public Derivation

Private members           	Not Inherited           Not Inherited              Not Inherited
Protected members           Private                 Protected            --->  Protected
Public members           	Private                 Protected                  Public
*/